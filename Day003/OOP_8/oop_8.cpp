/*
	�Լ��� ����, ���� ������
	�Լ� ȣ���� : Call By Name                            // �Ű� ���� X 
	                Call By Value, Call By Reference(�ּ�)  // �Ű� ���� O
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

//void increase(Circle c) { // ���� �����ؼ� ���
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//	cout << c.getRadius() << endl; // 2
//}

void increase(Circle *c) { // �ּҰ��� ���
	int r = c->getRadius();
	c->setRadius(r + 1);
	cout << c->getRadius() << endl; // 2
}

int main() {
	Circle donut;
	//increase(donut); // Call By Value
	increase(&donut); // Call By Reference

 	cout << donut.getRadius() << endl; // �� : 1(���� ����), �ּ� : 2(�ּҸ� �����ϱ�)
	return 0;
}