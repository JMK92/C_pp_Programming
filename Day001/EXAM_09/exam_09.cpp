/*
	���������� ��������
	scope ������(����������, ::, ~��)
	std:: std��
*/

#include<iostream>
using namespace std;

int a = 10;      // ��������

namespace BBB {
	int a = 20;
}

int main() {
	int a = 100; // �������� -> �⺻������ ���������� ȣ��

	cout << "�������� =  " << a << endl;
	cout << "�������� =  " << ::a << endl; // ���� ������ �츮 ����� ���̶� ���������� ������ �ʾƵ� �ȴ�.
	cout << "�̸����� BBB.a =  " << BBB::a << endl;

	return 0;
}