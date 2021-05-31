/*
	전역변수와 지역변수
	scope 연산자(소유연산자, ::, ~꺼)
	std:: std꺼
*/

#include<iostream>
using namespace std;

int a = 10;      // 전역변수

namespace BBB {
	int a = 20;
}

int main() {
	int a = 100; // 지역변수 -> 기본적으로 지역변수가 호출

	cout << "지역변수 =  " << a << endl;
	cout << "전역변수 =  " << ::a << endl; // 전역 변수는 우리 모두의 것이라서 누구것인지 밝히지 않아도 된다.
	cout << "이름공간 BBB.a =  " << BBB::a << endl;

	return 0;
}