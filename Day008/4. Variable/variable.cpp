/*
	변수의 유효범위 : 변수의 소멸시점
	지역변수의 전역변수
*/

#include<iostream>
using namespace std;

int g = 20;           // 전역변수 - 초기화 하지 않고 실행해도 error가 발생하지 않는다.

int add(int x, int y) {  // 전역함수
	
	cout << "전역변수 g = " << g << endl;
	return x + y;
}

int main() {
	int a, b, sum;   // 지역변수


	cout << "두 개의 정수 입력 = ";
	cin >> a >> b;

	sum = a + b;
	cout << "sum = " << sum << endl;
	cout << "sum = " << add(a, b) << endl;
	cout << "전역변수 g = " << g << endl;

	return 0;
}