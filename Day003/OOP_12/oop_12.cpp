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
	Circle c; // 반지금 1인 원 생성
	Circle& ref = c; // ref랑 주소 공유

	ref.setRadius(10);

	cout << ref.getRadius() << " : " << c.getRadius() << endl;
	//          10                            10        -> 주소 공유를 해서 어느곳 하나 값이 바뀌면 같이 바뀜.

	return 0;
}