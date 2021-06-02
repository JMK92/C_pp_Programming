#include<iostream>
using namespace std;

class Circle {
public:
	int radius;

public:
	Circle();
	Circle(int r);

	~Circle();      // 소멸자 메서드

	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름이 " << radius << "인 원 생성" << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << "인 원 생성" << endl;
}
Circle::~Circle() {
	cout << "반지름이 " << radius << "인 원 소멸" << endl;
}
double Circle::getArea() {
	return radius * radius * 3.14;
}

//전역 객체                // 순서
Circle globalDonut(1000); // 1 (생성)    12 (소멸)
Circle globalPizza(3000); // 2 (생성)    11 (소멸)

// 전역 함수
void f() {
	// 지역객체
	Circle fDonut(100);   // 5 (생성)    8 (소멸)
	Circle fPizza(300);   // 6 (생성)    7 (소멸)
 	 
}

int main() {
	/* 생성자와 소멸자의 실행 순서
	- 생성자는 donut, pizza 순서
	- 소멸자는 pizza, donut 순서 */

	/*Circle donut;
	Circle pizza(30);*/

	// 지역객체 생성 
	Circle mainDonut;       // 3 (생성)   10 (소멸)
	Circle mainPizza(30);   // 4 (생성)    9  (소멸)
	f();                  
	
	return 0; // 전역은 return 만나기전까지 살아 있음.
}