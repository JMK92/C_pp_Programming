/*
	������(Pointer) : �ּҸ� ����Ų��.
	�����ͺ���
	������ ������ : *(����, ����, ��), &(����, �ּ�)
*/

#include<iostream>
using namespace std;

int main() {
	int a = 10;   // ������ ����
	int* p = &a;   // �⺻ �����ʹ� 1byte���� ���µ� int�� 4byte�̹Ƿ� �����͵� 4byte �̵� �� �� �ְ� int ����

	cout << "a = " << a << endl;
	cout << "a �ּ� = " << &a << endl;
	
	cout << "a = " << *p << endl;
	cout << "a �ּ� = " << p << endl;

	return 0;
}