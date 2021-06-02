/*
	객체지향 프로그램(OOP, Object-Oriented Programming)
	- 모든 데이터를 객체(Object)로 취급하여 처리하는 객체 중심 프로그램.
	- 세상에 모든 것은 객체
	- 특징 : 추상화, 캡슐화, 정보은닉, 상속성, 다형성

	클래스와 객체                                   -> 재활용을 위해서 사용
	- 클래스(class) : 객체(Object)를 모델링하는 것
	  자료구조 : 변수, 배열, 구조체
	  멤버변수(property) - 속성, 멤버메서드(method, 함수) - 행위나 행동
	  접근제한자(접근지정자) : private, public, protected    //public - 인스턴스로 접근, protected - 상속관계에서 접근, private - 접근 X

	- 객체(object)와 객체(instance) - object에 접근 할 수 있는 객체
*/

#include<iostream>
#include<string>    // string 클래스 포함
using namespace std;

#include"Person.h" // 내가 만든건 "" 사용한다.

int main() {
	// 객체(instance)를 생성해야 한다.
	Person p("홍길동");
	//p.name = "홍길동";

	Person q("장보고"); // 재활용을 되니 여러개 만들 수 있다. 단, 서로 다른 기억공간에 저장이 됨.
	//q.name = "장보고";

	Person w("김유신");
	//w.name = "김유신"; // 인스턴스 만들때 마다 name을 만들면 거추장 스러우니 -> class에 생성자 메서드를 만들어 default값 지정.

	// 객체를 이용해서 멤버에 접근 : direct 연산자(.)
	p.walk(5);
	p.run(10);

	q.walk(10);
	q.run(15);

	w.walk(20);


	return 0;
}