#include<iostream>
using namespace std;

#include"Circle.h"


Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() { // 기술만 밖에서 하는 거지 사실상 안에 있는거다.
	return radius * radius * 3.14;
}

void Circle::setRadius(int r) {
	radius = r;
}
int Circle::getRadius() {
	return radius;
}

