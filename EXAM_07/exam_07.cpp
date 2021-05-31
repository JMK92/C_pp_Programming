/*
	default parameter : 디폴트 매개변수
	- 매개변수에 처음값을 설정하는 기능
	- 함수의 오버로딩의 확장형이라고 생각해도 됨.
*/

#include<iostream>
using namespace std;

int function(int a = 10) {
	return a;
}

int main() {
	
	cout << function() << endl;    // default 10이 출력됨
	cout << function(100) << endl; // 100이 a 값으로 사용된다.
	return 0;
}