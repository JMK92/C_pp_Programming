/*
	포인터(Pointer) : 주소를 가리킨다.
	포인터변수
	포인터 연산자 : *(간접, 직접, 값), &(참조, 주소)
*/

#include<iostream>
using namespace std;

int main() {
	int a = 10;   // 정수형 변수
	int* p = &a;   // 기본 포인터는 1byte씨가 가는데 int는 4byte이므로 포인터도 4byte 이동 할 수 있게 int 써줌

	cout << "a = " << a << endl;
	cout << "a 주소 = " << &a << endl;
	
	cout << "a = " << *p << endl;
	cout << "a 주소 = " << p << endl;

	return 0;
}