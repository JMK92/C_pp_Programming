/*
	객체 포인터 : 객체에 대한 포인터 변수를 선언하여 사용하는 것
	포인터 변수 : 메모리의 주소를 저장하는 변수
	자료형 : 기본자료형(C에서 만든것), 사용자정의 자료형(배열명, 구조체형, 클래스, 포인터...)
*/

#include<iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int radius) { // 
	//radius = radius; // 뜻이 모호 한것.
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut; // 객체 생성
	Circle pizza(30);

	Circle* p; // 객체 포인터 변수 선언

	p = &donut; // donut의 주소 담기

	cout << "donut 객체 면적 = " << donut.getArea() << endl;
	cout << "p 포인터 객체 면적 = " << p->getArea() << endl;
	cout << "p 포인터 객체 면적 = " << (*p).getArea() << endl; // p-> 와 (*p) 동일한 의미

	p = &pizza;
	cout << "pizza 객체 면적 = " << donut.getArea() << endl;
	cout << "p 포인터 객체 면적 = " << p->getArea() << endl;
	cout << "p 포인터 객체 면적 = " << (*p).getArea() << endl; // p-> 와 (*p) 동일한 의미
	return 0;
}