/*
	함수와 참조, 복사 생성자
	함수 호출방법 : Call By Name                            // 매개 변수 X 
	                Call By Value, Call By Reference(주소)  // 매개 변수 O
*/
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
};

//void increase(Circle c) { // 값을 복사해서 사용
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//	cout << c.getRadius() << endl; // 2
//}

void increase(Circle *c) { // 주소같이 사용
	int r = c->getRadius();
	c->setRadius(r + 1);
	cout << c->getRadius() << endl; // 2
}

int main() {
	Circle donut;
	//increase(donut); // Call By Value
	increase(&donut); // Call By Reference

 	cout << donut.getRadius() << endl; // 값 : 1(값만 보냄), 주소 : 2(주소를 보내니깐)
	return 0;
}