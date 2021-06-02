/*
	��ü �迭 : ������ Ŭ������ ���� ������ �������� ��ü�� ���� ��.

*/

#include<iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle() { radius = 1; }
	Circle(int r) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea();
};

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle cArray[3]; // Circle a; Circle b, Circle c; �� ���� �ǹ�

	// ��ü�迭�� ��Ҹ� �̿��ؼ� ����
	cArray[0].setRadius(10);  // ���� ����X -> private�̶�
	cArray[1].setRadius(20);
	cArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "�� ���� = " << cArray[i].getArea() << endl;
	}

	Circle* p; // ������ ���� ����
	p = cArray; // �迭���� �迭�� �����ּҿ� ���� .(cArray[0]�� ����)

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i << "�� ���� = " << cArray[i].getArea() << endl;
		p++; // ������ ��ġ�� �ٲ��.
	}


	return 0;
}