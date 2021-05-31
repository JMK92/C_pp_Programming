/*
	const의 위치와 의미 그리고 사용법
	- const(constant) : 상수, 변하지 않는 수(고정 수) - 앞에 포인터가 있어도 바꾸지 못한다.
*/

#include<iostream>

using namespace std;

int main() {
	//const int num = 10;
	int const num = 10; // 위에처럼 사용도 가능.

	// num = 20; -> const를 사용하여 변경할 수 없다.
	cout << num << endl;

	return 0;
}