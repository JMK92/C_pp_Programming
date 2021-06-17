#pragma once
#include"Shape.h"

class Circle : public Shape {
public:
	Circle(int x, int y, int r);
	//Circle(const Circle& rhs);
	// ~Circle();
	// Circle& operator=(const Circle& rhs);

	int radius() const;    //get

	virtual double area() const;

public:
	int radius_;
};
