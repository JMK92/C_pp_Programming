/*
	사각형(Rectangle) 객체를 구현하시오.
	멤버로는 너비(width)와 높이(height)를 필드로 가지고, 
	사각형의 면적을 계산하여 되돌려주는 메서드 getArea()를 구현 할것

	단, 클래스의 선언부와 구현부로 분리하여 구현할것.
*/

#include<iostream>
using namespace std;

// 클래스 선언부
class Rectangle {
public:
	// 멤버 필드
	int width;
	int height;

public:
	// 멤버 메서드
	int getArea();
};

// 클래스 구현부                  // 클래스꺼 메서드
int Rectangle::getArea(){       // int, double이나 멤버메서드랑 동일하게 작성.
	return width * height;
}


int main() {
	Rectangle rect;
	

	rect.height = 3;
	rect.width = 5;

	 
	 int area = rect.getArea();

	cout << "rect의 면적은 " << area << endl;
	cout << "rect의 면적은 " << rect.getArea() << endl;


	return 0;
}