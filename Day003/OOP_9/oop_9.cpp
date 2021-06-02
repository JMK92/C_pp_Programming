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
	//c1 = c2; // ��ü ���� -> �������� �ٸ�. => c2 ���� �ٲ�ٰ� c1�� �ٲ���X, �ٲ���� �ּҸ� �����ؾ���.

	Circle c; // ��ü ����(������ 1)
	cout << c.getRadius() << endl; // ������ 1

	c = getCircle();  // ��ü ����
	cout << c.getRadius() << endl; // ������ 30


	return 0;
}