/*
	��ü ������ : ��ü�� ���� ������ ������ �����Ͽ� ����ϴ� ��
	������ ���� : �޸��� �ּҸ� �����ϴ� ����
	�ڷ��� : �⺻�ڷ���(C���� �����), ��������� �ڷ���(�迭��, ����ü��, Ŭ����, ������...)
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
	//radius = radius; // ���� ��ȣ �Ѱ�.
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut; // ��ü ����
	Circle pizza(30);

	Circle* p; // ��ü ������ ���� ����

	p = &donut; // donut�� �ּ� ���

	cout << "donut ��ü ���� = " << donut.getArea() << endl;
	cout << "p ������ ��ü ���� = " << p->getArea() << endl;
	cout << "p ������ ��ü ���� = " << (*p).getArea() << endl; // p-> �� (*p) ������ �ǹ�

	p = &pizza;
	cout << "pizza ��ü ���� = " << donut.getArea() << endl;
	cout << "p ������ ��ü ���� = " << p->getArea() << endl;
	cout << "p ������ ��ü ���� = " << (*p).getArea() << endl; // p-> �� (*p) ������ �ǹ�
	return 0;
}