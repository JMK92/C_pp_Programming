#include<iostream>
using namespace std;

#include"Circle.h"

int main() {
	Circle c;
	//c.radius = 5; // �۵�X �ٱ￡�� ���� ����X -> private�̶�
	c.setRadius(5); // �̷��� ����
	cout << "������ = " << c.getRadius() << endl;

	return 0;
}