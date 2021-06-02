#include<iostream>
using namespace std;

#include"Circle.h"

int main() {
	Circle c;
	//c.radius = 5; // 작동X 바깍에서 직접 접근X -> private이라서
	c.setRadius(5); // 이렇게 접근
	cout << "반지름 = " << c.getRadius() << endl;

	return 0;
}