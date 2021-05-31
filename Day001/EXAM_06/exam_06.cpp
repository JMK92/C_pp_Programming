/*
	함수 오버로딩(Function Overloading)
	- 동일한 이름의 함수를 중복해서 정의하는 것
	- 조건 : 매개변수의 개수가 다르거나 자료형이 달라야 한다.
	- 함수를 호출할 때 함수의 이름과 매개변수의 정보까지 참조해서
*/

#include<iostream>
using namespace std;

int function() { //int -> return값을 가지고 있다(정수형).
	return 10;
}

int function(int a) {

	return a;        // 매개변수가 있음.
}

int function(int a, int b) {

	return a + b;     // 매개변수의 개수가 다름
}

float function(float a) {
	return a;         // 매개변수의 타입이 다름
}

int main() {
	
	cout << function() << endl; // 함수 호출
	cout << function(10, 20) << endl;
	//cout << function(3.1f, 2.5f); // 에러 -> 2개 float의 를 사용하는 function함수가 없음
	cout << function(3.1f) << endl; // 3.1하면 에러 -> double이 기본형, float을 사용하려면 뒤에 f 사용
 
	return 0;
}