/*
	������ ��ȿ���� : ������ �Ҹ����
	���������� ��������
*/

#include<iostream>
using namespace std;

int g = 20;           // �������� - �ʱ�ȭ ���� �ʰ� �����ص� error�� �߻����� �ʴ´�.

int add(int x, int y) {  // �����Լ�
	
	cout << "�������� g = " << g << endl;
	return x + y;
}

int main() {
	int a, b, sum;   // ��������


	cout << "�� ���� ���� �Է� = ";
	cin >> a >> b;

	sum = a + b;
	cout << "sum = " << sum << endl;
	cout << "sum = " << add(a, b) << endl;
	cout << "�������� g = " << g << endl;

	return 0;
}