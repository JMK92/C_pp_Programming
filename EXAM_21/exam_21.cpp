/*
	삼항연산자 : C/C++ 만이 갖고 있는 독특한 연산자
	- if 연산자의 모체가 된다.
	- 조건항? 반환값1 : 반환값2;
	  조건항이 참이면 반환값1, 거짓이면 반환값2
*/
#include<iostream>
using namespace std;

int main() {
	int num1 = 11;
	int num2 = 10;
	int res;

	res = (num1 < num2) ? num1 : num2; // 비교했을때 작은 값을 담는다.
	 
	cout << "두 수중 작은 수는 " << res << endl;

	return 0;
}