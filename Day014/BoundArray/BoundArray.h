#pragma once
#include"SafeArray.h"

class BoundArray : public SafeArray {
public:
	BoundArray(int num1, int num2);
	//virtual ~BoundArray() {}

	int lower() const;
	int upper() const;

	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;

private:
	int low_;
};

