#include<iostream>



class Circle {
	int radius;  // 지정자 생략 - private

public:
	Circle();
	Circle(int r);
	double getArea();
	void setRadius(int r);
	int getRadius();

};

