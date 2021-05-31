/*
	point(포인터) : 메모리를 가르키는 키워드
    - 메모리의 주소값을 저장하는 변수(포인터 변수)

*/

#include<iostream>

using namespace std;

int main() {
	int a = 10;   // 일반 변수 선언 : 값을 담는다
	int b = 20;
	int* p = &a;  // 포인터 변수 선언 : 주소를 담는다., &a -> a변수 주소 참조(주소가 출력), a라고 하면 오류.
	//const int* p = &a; // *p 자체가 상수화 되어 변하지 않는다.
	//int* const p = &a; // p가 상수화가 되어 다른값을 담지 못한다. => const 위치에 따라 다르다.


	cout << "a = " << a << endl;
	cout << "p = " << p << endl;
	cout << "p = " << &a << endl; // & 주소연산자
	cout << "a = " << *p << endl; // * 참조연산자, *p -> p에는 주소가 있음 * 붙이면 그 주소의 값을 가지고 와라.
	cout << "a = " << p << endl; // a의 주소

	/*
	cout << *p << endl;
	*p = 2;   // 직접 담는다. 만약 위에서 포인터에 const 붙이면 바뀌지 않는다.
	cout << "**p = " << * p << endl;
	cout << "a = " << a << endl; // a = 2 로 바뀜

	p = &b; // 포인터는 변할 수 있다.
	cout << "b = " << *p << endl; 
	cout << "b = " << p << endl;
	*/
	return 0;
}