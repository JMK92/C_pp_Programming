#include<iostream>
#include<string>
using namespace std;

class Person { // 사람을 모델링
	// 접근제한자
	// 멤버필드 -> private ( 틀 못 바꾸게 함 )

	// 접근제한자
	// 멤버메서드 -> public ( 틀은 못 바꾸지만 안에 내용을 바꿀수 있게 함 )

public:
	string name;


public: // 접근제한자 (public - 누구나 접근 할 수 있다. 단, 인스턴스로 접근)
	//생성자 메서드 : 객체(인스턴스)가 생성될 때 자동으로 호출되는 메서드
	//Person() { // default constructor(디폴트 생성자) -> 매개변수를 가지고 있지 않는 생성자
	Person(string irum){
	// 객체가 생성될 때 수행할 작업을 기술
	// 멤버필드를 초기화시켜주는 역활을 수행한다.
		name = irum;

	}


	void walk(int speed) { // void - return값이 없는 함수
		cout << name << "이 " << speed << "의 속도로 걸어갑니다." << endl;
	}

	void run(int speed) {
		cout << name << "이 " << speed << "의 속도로 뛰어갑니다." << endl;
	}
};
