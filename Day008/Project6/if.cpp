/*
	���ǹ� : �־��� ���ǿ� ���� ó���Ǵ� ��
	- ���ǽ��� �ݵ�� �� ����� �� �Ǵ� �������� �����Ǿ�� �Ѵ�.
	- if��, switch-case��, ���ǿ�����(���׿�����)

	���׿����� : ���� �� �� ������ �ִ� ������
	- if-else���� ��ü�� �ȴ�.
	- ����
	  ������? ��1: ��2;
	  or
	  ���� = ������? ��1 : ��2;

	  ������(���ǽ�)�� ���̸� ��1, �׷��� ������ ��2�� ����ȴ�.
*/

#include<iostream>
using namespace std;

// 2 ���� ������ �Է¹޾� ū���� ã�� ����ϴ� ���α׷�
int main() {
	//int num1, num2, max;
	//
	//cout << "num1 = ";
	//cin >> num1;
	//cout << "num2 = ";
	//cin >> num2;

	//max = num1 > num2 ? num1 : num2; // num1�̵ǰ� �׷��� ������ num2�� �ȴ�.

	//cout << "max = " << max << endl;

	// 3 ���� ������ �Է¹޾� ū���� ã�� ����ϴ� ���α׷�
	int num1, num2, num3, max;
	
	cout << "num1 = ";
	cin >> num1;
	cout << "num2 = ";
	cin >> num2;
	cout << "num3 = ";
	cin >> num3;

	max = num1 > num2 ? num1 : num2; // num1�̵ǰ� �׷��� ������ num2�� �ȴ�.
	max = num3 > max ? num3 : max;

	cout << "max = " << max << endl;

	return 0;

}