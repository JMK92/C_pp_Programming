/*
	구조체(structure) -> 클래스
	- 서로 다른 타입의 자료형을 하나로 묶어서 관리하는 자료구조
	- 구조체의 멤버 or 멤버 변수
	- 선언 : struct 구조체형 명{
	       int a;
		  float b;
		  char c;
	    }; -> 전체 9byte
*/

#include<iostream>
using namespace std;

struct Book {
	char title[30];
	char author[30];
	int price;
};  // 구조체 완성

int main() {
	// 구조체 변수(객체)
	//struct Book book; // 구조체 변수 생성 -> 클래스의 인스턴스와 비슷
	struct Book web_book = { "C++ Program", "홍길동", 28000 }; // 구조체 초기화.
	//book.author // . 다이렉트 연산자 사용으로 접근

	cout << "책제목 : " << web_book.title << endl;
	cout << "저자명 : " << web_book.author << endl;
	cout << "책가격 : " << web_book.price << endl;

	return 0;
}