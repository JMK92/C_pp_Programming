#include<iostream>
using namespace std;

class Circle {
public:
	int radius;

public:
	Circle();
	Circle(int r);

	~Circle();      // �Ҹ��� �޼���

	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "�������� " << radius << "�� �� ����" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << "�� �� ����" << endl;
}
Circle::~Circle() {
	cout << "�������� " << radius << "�� �� �Ҹ�" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

//���� ��ü                // ����
Circle globalDonut(1000); // 1 (����)    12 (�Ҹ�)
Circle globalPizza(3000); // 2 (����)    11 (�Ҹ�)

// ���� �Լ�
void f() {
	// ������ü
	Circle fDonut(100);   // 5 (����)    8 (�Ҹ�)
	Circle fPizza(300);   // 6 (����)    7 (�Ҹ�)
 	 
}

int main() {
	/* �����ڿ� �Ҹ����� ���� ����
	- �����ڴ� donut, pizza ����
	- �Ҹ��ڴ� pizza, donut ���� */

	/*Circle donut;
	Circle pizza(30);*/

	// ������ü ���� 
	Circle mainDonut;       // 3 (����)   10 (�Ҹ�)
	Circle mainPizza(30);   // 4 (����)    9  (�Ҹ�)
	f();                  
	
	return 0; // ������ return ������������ ��� ����.
}