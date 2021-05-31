/*
	�Լ� �����ε�(Function Overloading)
	- ������ �̸��� �Լ��� �ߺ��ؼ� �����ϴ� ��
	- ���� : �Ű������� ������ �ٸ��ų� �ڷ����� �޶�� �Ѵ�.
	- �Լ��� ȣ���� �� �Լ��� �̸��� �Ű������� �������� �����ؼ�
*/

#include<iostream>
using namespace std;

int function() { //int -> return���� ������ �ִ�(������).
	return 10;
}

int function(int a) {

	return a;        // �Ű������� ����.
}

int function(int a, int b) {

	return a + b;     // �Ű������� ������ �ٸ�
}

float function(float a) {
	return a;         // �Ű������� Ÿ���� �ٸ�
}

int main() {
	
	cout << function() << endl; // �Լ� ȣ��
	cout << function(10, 20) << endl;
	//cout << function(3.1f, 2.5f); // ���� -> 2�� float�� �� ����ϴ� function�Լ��� ����
	cout << function(3.1f) << endl; // 3.1�ϸ� ���� -> double�� �⺻��, float�� ����Ϸ��� �ڿ� f ���
 
	return 0;
}