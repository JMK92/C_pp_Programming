#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(int x, int y, int w, int h);
	// Rectangle(const Rectangle& rhs);
	// virtual ~Rectangle();
	// Rectangle& operator=(const Rectangle& rhs);

	// get, set... omitt
	int width() const;    //get
	int height() const;   //get

	virtual double area() const;

private:
	int width_;
	int height_;
};