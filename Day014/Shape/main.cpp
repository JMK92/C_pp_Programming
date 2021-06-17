#include<iostream>
#include<typeinfo>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

void printArea(const Shape* ps) {   // 다형성

	//RTTI :runtime type identification          Rectangle?? Circle??
	if (typeid(*ps) == typeid(Rectangle)) {
		std::cout << "rectangle ";
		// width, height ??
		
		//ps->width() ps->height()    // ps는 부모 타입 -> 오류

		const Rectangle* p = (Rectangle*)ps; // 부모 타입 포인터를 자식 포인터로 바꾸어줌 => 잘봐두기
		                               
		std::cout << "width : " << p->width() << "height : " << p->height() << " ";
	}
	else if (typeid(*ps) == typeid(Circle)) {
		std::cout << "Circle ";
		// radius ?

		const Circle* p = (Circle*)ps;
		std::cout << "radius : " << p->radius() << " ";
	}
	else {

	}

	std::cout << "area : " << ps->area() << std::endl;  // 동적 바인딩
}

int main() {

	//Shape s; X
	Shape* shapes[5];   // 배열
	shapes[0] = new Rectangle(50, 50, 100, 20);
	shapes[1] = new Rectangle(100, 20, 20, 10);
	shapes[2] = new Circle(10, 10, 5);
	shapes[3] = new Circle(200, 200, 15);
	shapes[4] = new Rectangle(100, 15, 5, 200);

	for (int i = 0; i < 5; ++i)
		printArea(shapes[i]);

	for (int i = 0; i < 5; ++i)
		delete shapes[i];


	return 0;
}
