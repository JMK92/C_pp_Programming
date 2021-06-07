/* 
	가상 함수   : 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수
	              반드시 재정의해야만 하는 함수는 아니다.

	순수 가상 함수 : 반드시 파생클래스에서 재정의해야만 하는 함수
	- virtual 멤버함수의 원형 = 0;

	추상 클래스(abstract class)
	- 하나 이상의 순수 가상 함수를 포함하는 클래스
	- 반드시 재정의해야만 한다.
	- 추상클래스는 객체를 생성할 수 없다.
*/

#include<iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}    // 가상 소멸자의 선언
	virtual void cry() = 0; // 순수 가상 함수의 선언

};

class Dog : public Animal {
public:
	virtual void cry() {             // 자식들은 다 적어야 한다.
		cout << "멍멍" << endl;
	}
};

class Cat : public Animal {
public:
	virtual void cry() {
		cout << "야옹" << endl;
	}
};

int main() {
	Dog my_dog;
	my_dog.cry();

	Cat my_cat;
	my_cat.cry();

	//Animal ani;         // 추상클래스는 객체를 생성할 수 없다.
	                      // 객체 못만드는데 왜 만들었을까?
	                      //              |
						  //	          v
	Animal* ani = &my_dog; // 다형성을 사용하기 위해서 사용.
	ani->cry();

	return 0;
}