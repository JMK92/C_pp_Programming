/*
	원을 모델링하는 작업
	멤버로는 반지름을 담는 변수 radius와 원의 면적을 계산하여
	되돌려주는 메서드 getArea()를 구현
*/

#include<iostream>
using namespace std;
#define PI 3.14


// 클래스 선언부(calss declaration)
class Circle {
public:
	// 멤버필드
	int radius;

public:                             // 핃드와 메서드를 분리해서 작성 (권장)
	// 멤버메서드
	double getArea();	
};

// 클래스 구현부(class implementation)       -> 멤버메서드를 빼낸다(대신 소유연산자 사용 '::' ). 결과형 리턴값을 사용.
double Circle::getArea() {                    /// Circle에 있는 것을 사용.
	return radius * radius * PI;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();

	cout << "donut객제 면적 = " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();

	cout << "pizza객제 면적 = " << area << endl;

	return 0;
}