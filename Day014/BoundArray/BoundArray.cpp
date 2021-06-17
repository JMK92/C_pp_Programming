#include "BoundArray.h"
#include"InvalidIndex.h"

BoundArray::BoundArray(int num1, int size) 
	: low_(num1), SafeArray(size-num1) {

}
int BoundArray::lower() const {
	return low_;
}

int BoundArray::upper() const {
	return low_ + this->Array::size_; //SafeArray::size_; //
}

int& BoundArray::operator[](int index) {
	//throw InvalidIndex(index);     // 범위를 벗어나면 던진다

	if (index < low_ || index >= this->upper())
		throw InvalidIndex(index);
	return this->SafeArray::operator[](index - low_);
}
const int& BoundArray::operator[](int index) const {
	//throw InvalidIndex(index);
	if (index < low_ || index >= this->upper())
		throw InvalidIndex(index);
	return this->SafeArray::operator[](index - low_);
}