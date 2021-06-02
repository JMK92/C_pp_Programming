/*
	���� �𵨸��ϴ� �۾�
	����δ� �������� ��� ���� radius�� ���� ������ ����Ͽ�
	�ǵ����ִ� �޼��� getArea()�� ����
*/

#include<iostream>
using namespace std;
#define PI 3.14


// Ŭ���� �����(calss declaration)
class Circle {
public:
	// ����ʵ�
	int radius;

public:                             // ����� �޼��带 �и��ؼ� �ۼ� (����)
	// ����޼���
	double getArea();	
};

// Ŭ���� ������(class implementation)       -> ����޼��带 ������(��� ���������� ��� '::' ). ����� ���ϰ��� ���.
double Circle::getArea() {                    /// Circle�� �ִ� ���� ���.
	return radius * radius * PI;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();

	cout << "donut���� ���� = " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();

	cout << "pizza���� ���� = " << area << endl;

	return 0;
}