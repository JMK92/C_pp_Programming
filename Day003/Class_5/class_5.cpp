#include<iostream>
using namespace std;

class Circle {
public:
	int radius;

public:
	Circle();
	Circle(int r);
	double getArea();

};

Circle::Circle() {
	radius = 1; // ����ʵ带 �ʱ�ȭ
	cout << "������ = " << radius << "�� ����" << endl;
}

Circle::Circle(int r) {
	radius = r; // ����ʵ带 �ʱ�ȭ
	cout << "������ = " << radius << "�� ����" << endl;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

/*
	�������� �Է¹޾� ���� ������ ����Ͽ� ����ϴ� ���α׷�
	��, �Է¹��� �������� 0�̸� ���α׷� �����Ͻÿ�.
*/

int main() {
	int r;
	//Circle c;

	while (true) {
		cout << "������ = ";
		cin >> r;
		if (r == 0) {
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;
		}
		Circle c(r);
		cout << "���� ���� = " << c.getArea() << endl;
		
	}

	return 0;
}