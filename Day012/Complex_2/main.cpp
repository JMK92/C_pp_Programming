#include<iostream>
#include"Complex.h"
using namespace std;

//void printComplex(Complex c)     // 두개다 사용
//{
//	cout << "(" << c.real() << ", " << c.imag() << "i)" << endl;
//}
//
//void printComplex(Complex& c)
//{
//	cout << "(" << c.real() << ", " << c.imag() << "i)" << endl;
//}
// 클래스 타입을 인자로 사용할 때  call-by-reference 사용 -> 복사생성자 소멸자를 막을 수 있어서

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
	cout << "c2 : " << c2 << endl;    // cout.operator<<(c1) X - 라이브러리를 고칠수는 없다.
	cout << "c3 : " << c3 << endl;    // operator<<(cout, c1) -> 전역함수 형태로 고치기
	cout << "c4 : " << c4 << endl;

	//printComplex(c1);
	//c3 = 3.0;                // Complex tmp(3.0) ; c3 = tmp; tmp.~Complex()

	return 0;
}