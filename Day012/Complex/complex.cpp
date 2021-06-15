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

// const : ���ʿ� �ִ¾ִ� �����ʿ� �ִ¾ְ� ���� ���� �ٲ�ϱ�
Complex& Complex::operator=(const Complex & rhs){  // ������� ��ü�� ����
	this->re_ = rhs.re_;
	this->im_ = rhs.im_;

	return *this;  // �ڱ��ڽ� ��ü
}

bool Complex::operator==(const Complex& rhs) {

	return (this->re_ == rhs.re_ && this->im_ == rhs.im_);		
}

const Complex Complex::operator+(const Complex & rhs) {

	Complex result(this->re_ + rhs.re_, this->im_ + rhs.im_);
	return result;  // result ������ü�� Complex& �ȵ� -> ���ɶ��������� ��¿ �� ����.
}

double Complex::real() {  // get �Լ�
	return this->re_;
}

double Complex::imag() {  // get �Լ�
	return this->im_;
}

void Complex::real(double re) {    // set�Լ�
	this->re_ = re;
}

void Complex::imag(double im) {     // set�Լ�
	this->im_ = im;
}