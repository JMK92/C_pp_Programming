// �������� �Լ�
#include<iostream>
using namespace std;

//void swap(int &a, int &b) { // int &a = a-> nick name a�� ������.(���� ����)
//	int t = a;
//	a = b;
//	b = t;
//	cout << a << " : " << b << endl;
//	// ���� �Ҹ�
//}


// int function -> �Լ� �̸� �տ��� ������ ���� ���� ���´�.
int& FuncOne(int& a) { // int &a = num1;
	a++;             // a = 6
	return a;        // a ���� �����Ѱ��� �ƴ϶� ���ϰ��� �������̴�.
}

int FuncTwo(int& a) {  // ������ ������
	a++;
	return a;
}

int main() {
	int num1 = 5;
	int num2 = FuncOne(num1); // int& num2 = num1;
	cout << num1 << " : " << num2 << endl; // ���� ������ ��.
	              
	
	
	/*int a = 10, b = 20;
	cout << "main = " << a << " : " << b << endl;

	swap(a, b);
	cout << "swap = " << a << " : " << b << endl;*/

	return 0;
}
