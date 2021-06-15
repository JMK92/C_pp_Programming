#include<iostream>
#include"Complex.h"
using namespace std;

//void printComplex(Complex c)     // �ΰ��� ���
//{
//	cout << "(" << c.real() << ", " << c.imag() << "i)" << endl;
//}
//
//void printComplex(Complex& c)
//{
//	cout << "(" << c.real() << ", " << c.imag() << "i)" << endl;
//}
// Ŭ���� Ÿ���� ���ڷ� ����� ��  call-by-reference ��� -> ��������� �Ҹ��ڸ� ���� �� �־

int main() {

	Complex c1(3.0, 4.0);    // 3.0 + 4.0i
	Complex c2 = 3.0;        // Complex c2(3.0);
	Complex c3;
	Complex c4 = c1;         //Complex c4(c1); // 3.0 + 4.0i

	//int i = 300;             // int i(300);

	c3 = c1;              // c3.operator(c1); or operator<<(c3, c1);
	//c3.real(c1.real());
	//c3.imag(c1.imag());
	
	//c3 = c2 = c1;            // daisy-chain, c2 = c1 ����� : c2, side_effect : c1

	if (c1 == c3)             // c1.operator(c3)
		cout << "c1 and c3 are equal" << endl;
	else
		cout << "c1 and c3 are not equal" << endl;

	c3 = c1 + c2;         // c1.operator(c2);

	cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << endl; // c1 : (3, 4i)
	cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << endl;
	cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << endl;
	cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << endl;

	//printComplex(c1);
	//c3 = 3.0;                // Complex tmp(3.0) ; c3 = tmp; tmp.~Complex()

	return 0;
}