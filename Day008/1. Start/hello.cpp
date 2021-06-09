// 전처리문 :  preprocessor
#include<iostream>     // import와 동일한 의미를 지닌다.

/*
	ios : input output system, 최상위 객체
	istream/ostream -> iostream
	stream(스트림) : 시냇물, 통로(데이터, 제어신호)
	C언어 #include<stdio.h>
	- string.h : 문자열과 관련된 함수를 제공 => cstring(C++)
*/

using namespace std;  // using namespace은 1나 밖에 못쓴다.
namespace A {
	void aaa() {}
	void bbb() {}

}
/*
	이름 없는 이름 공간
	- namespace {..}
	- 모든 객체가 static 키워드가 붙어있는 효과를 낸다.
*/
namespace B{
	void aaa() {}
	void bbb() {}
}

// 전역함수 or 전역변수 or 메크로상수(특정 문자가 상수값을 가지고 있다)
/*
	#define 상수명 =값;
	const(=constant) : 상수
	- 상수는 변하지 않는 수, 고정된 수
*/

// main 함수 : 프로그램의 시작과 끝을 나타내는 함수
int main() { // 리턴타입 함수명(매개변수){....}
	/*
		이름공간(namespace)과 소유연산자(scopre 연산자, ::) - ~꺼
	*/
	//A::aaa();
	//std::cout << "Hello, World" << std::endl;
	cout << "Hello, World" << endl;
	/*
		printf => cout 객체와 << 연산자
		scanf  => cin 객체와 >> 연산자
		std : C++ 표준 라이브러리의 모든 함수, 객체등이 정의된 이름공간
	*/
	return 0; // 0은 정수니깐 리턴타입이 int가 되어야 한다. -> 프로그램을 종료한다는 의미.
}