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

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main() {
	//Circle c1(5);
	//Circle c2(30);
	//c1 = c2; // 객체 복사 -> 기억공간은 다름. => c2 값이 바뀐다고 c1이 바뀌지X, 바뀔려면 주소를 공유해야함.

	Circle c; // 객체 생성(반지름 1)
	cout << c.getRadius() << endl; // 반지름 1

	c = getCircle();  // 객체 복사
	cout << c.getRadius() << endl; // 반지름 30


	return 0;
}