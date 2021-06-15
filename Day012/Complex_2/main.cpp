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

	const Complex c1(3.0, 4.0);    // 3.0 + 4.0i
	Complex c2 = 3.0;        // Complex c2(3.0);
	Complex c3;
	Complex c4 = c1;         //Complex c4(c1); // 3.0 + 4.0i

	c3 = c2 = c1;           
	if (c1 == c3)             // c1.operator(c3)
		cout << "c1 and c3 are equal" << endl;
	else
		cout << "c1 and c3 are not equal" << endl;

	++c2;  // c2.operator++()
	c2++;  // c2.operator++(0)

	c3 = c1 + c2;         // c1.operator(c2);

	c3 = c1 - c2;
	c4 += c3;

	c1 != c3;
	/*cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << endl; // c1 : (3, 4i)
	cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << endl;
	cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << endl;
	cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << endl;*/
	
	cout << "c1 : " << c1 << endl;    // cout << c1;
	cout << "c2 : " << c2 << endl;    // cout.operator<<(c1) X - ���̺귯���� ��ĥ���� ����.
	cout << "c3 : " << c3 << endl;    // operator<<(cout, c1) -> �����Լ� ���·� ��ġ��
	cout << "c4 : " << c4 << endl;

	//printComplex(c1);
	//c3 = 3.0;                // Complex tmp(3.0) ; c3 = tmp; tmp.~Complex()

	return 0;
}