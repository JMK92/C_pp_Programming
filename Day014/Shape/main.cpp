#include<iostream>
#include<typeinfo>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

void printArea(const Shape* ps) {   // ������

	//RTTI :runtime type identification          Rectangle?? Circle??
	if (typeid(*ps) == typeid(Rectangle)) {
		std::cout << "rectangle ";
		// width, height ??
		
		//ps->width() ps->height()    // ps�� �θ� Ÿ�� -> ����

		const Rectangle* p = (Rectangle*)ps; // �θ� Ÿ�� �����͸� �ڽ� �����ͷ� �ٲپ��� => �ߺ��α�
		                               
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

	std::cout << "area : " << ps->area() << std::endl;  // ���� ���ε�
}

int main() {

	//Shape s; X
	Shape* shapes[5];   // �迭
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
