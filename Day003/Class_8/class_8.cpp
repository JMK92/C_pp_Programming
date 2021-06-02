/*
	접근지정자(or 접근제한자)
	- 객체 지향 언어에서는 객체를 캡슐화하고, 외부에서의 접근을 제한한다.
	- private(비공개) : 클래스 내에서만 접근이 허용된다. (기본값, default)
	- protected(보호) : 상속관계에서만 접근이 허용된다.
	- public(공개)    : 객체(Instance)을 생성하면 어디서든 접근 허용
*/
#include<iostream>
using namespace std;

class Circle {
	int radius;  // 지정자 생략 - private

public:
	Circle();
	Circle(int r);
	double getArea();
	void setRadius(int r);
	int getRadius();
	
};

Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() { // 기술만 밖에서 하는 거지 사실상 안에 있는거다.
	return radius * radius * 3.14;
}

void Circle::setRadius(int r) {
	radius = r;
}
int Circle::getRadius() {
	return radius;
}

int main() {
	Circle c;
	//c.radius = 5; // 작동X 바깍에서 직접 접근X -> private이라서
	c.setRadius(5); // 이렇게 접근
	cout << "반지름 = " << c.getRadius() << endl;

	return 0;
}