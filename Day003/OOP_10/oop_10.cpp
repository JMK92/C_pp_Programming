/*
	참조변수 == NickName
	- 이미 선언된 변수와 별명을 만드는 기능
	- &연산자를 사용한다.
	- 선언시 반드시 초기화되어있어야 한다.

*/
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
};

int main() {
	int num = 5;
	int& ref = num; // 참조변수, 선언과 동시에 반드시 초기화가 되어있어야 한다. -> 이미 선언 되어 있은것에만 참조를 붙일 수 있다
	              
	ref++;   // 6 -> 하나의 공간에 2개의 이름을 가지고 있다.

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;


	return 0;
}