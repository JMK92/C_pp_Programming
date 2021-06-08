/*
	C++ 람다식의 구성
	- 캡처 리스트[] : 람다식에서 사용하고자 하는 함수 바깥의 변수 목록
	- 매개변수등()
	- 리턴타입'->' // 생략가능
	- 함수내용정의부 {...} : 람다식의 함수 코드
	----------------------------------------
	int func(int x, int y){
		return x+y;
	}

	[](int x, int y) -> int{return x+y;};

	---------------------------------------
	void func(int x, int y){
		cout << x+y;
	}

	[](int x, int y){ cout << x+y;};
	-----------------------------------------
	[](int x, int y){cout << x+y;}(2, 3); // 2와 3을 x, y 매개변수 대입
		
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	[](int x, int y) {cout << x + y << endl; }(2, 3); // 2와 3을 x, y 매개변수 대입


	auto love = [](string a, string b) {        // 람다식의 저장 타입을 사용자가 정해주면 error -> auto 사용
		cout << a << " 보다 " << b << "가 좋아" << endl;
	}; // 람다 표현식은 뒤에 ; 붙여 줘야 한다.

	love("냉면", "만두");

	return 0;
}