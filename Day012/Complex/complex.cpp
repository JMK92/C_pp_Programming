#include"Complex.h"

//Complex::Complex() { // default constructor
//	this->re_ = 0.0;
//	this->im_ = 0.0;
//}

//Complex::Complex(double re) {// convert constructor
//	this->re_ = re;
//	this->im_ = 0.0;
//}

Complex::Complex(double re, double im) {
	this->re_ = re;
	this->im_ = im;
}

Complex::Complex(const Complex& rhs) {
	this->re_ = rhs.re_;
	this->im_ = rhs.im_;
}

Complex::~Complex() {

}

// const : 왼쪽에 있는애는 오른쪽에 있는애가 들어가서 값이 바뀌니까
Complex& Complex::operator=(const Complex & rhs){  // 만들어진 객체를 리턴
	this->re_ = rhs.re_;
	this->im_ = rhs.im_;

	return *this;  // 자기자신 객체
}

bool Complex::operator==(const Complex& rhs) {

	return (this->re_ == rhs.re_ && this->im_ == rhs.im_);		
}

const Complex Complex::operator+(const Complex & rhs) {

	Complex result(this->re_ + rhs.re_, this->im_ + rhs.im_);
	return result;  // result 지역객체라서 Complex& 안됨 -> 성능떨어지더라도 어쩔 수 없다.
}

double Complex::real() {  // get 함수
	return this->re_;
}

double Complex::imag() {  // get 함수
	return this->im_;
}

void Complex::real(double re) {    // set함수
	this->re_ = re;
}

void Complex::imag(double im) {     // set함수
	this->im_ = im;
}