#include"Complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs) {

	//out << "(" << rhs.real() << ", " << rhs.imag() << "i)";
	out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";  // 헤더에서 friend를 만들어 주기 - private 접근 가능
	return out;
}

//Complex::Complex() { // default constructor
//	this->re_ = 0.0;
//	this->im_ = 0.0;
//}

//Complex::Complex(double re) {// convert constructor
//	this->re_ = re;
//	this->im_ = 0.0;
//}

Complex::Complex(double re, double im) 
	:re_(re), im_(im){
	/*this->re_ = re;
	this->im_ = im;*/
}

Complex::Complex(const Complex& rhs) 
	: re_(rhs.re_), im_(rhs.im_){
	/*this->re_ = rhs.re_;
	this->im_ = rhs.im_;*/
}

Complex::~Complex() {

}

// const : 왼쪽에 있는애는 오른쪽에 있는애가 들어가서 값이 바뀌니까
Complex& Complex::operator=(const Complex& rhs) {  // 만들어진 객체를 리턴
	re_ = rhs.re_;
	im_ = rhs.im_;

	return *this;  // 자기자신 객체
}

Complex& Complex::operator+=(const Complex& rhs) {
	re_ = rhs.re_;
	im_ = rhs.im_;

	return *this;
}

bool Complex::operator==(const Complex& rhs) const {    // 밑으로 쭉 this는 생략 가능

	return (re_ == rhs.re_ && im_ == rhs.im_);
}

bool Complex::operator!=(const Complex& rhs) const {

	//return (re_ != rhs.re_ || im_ != rhs.im_);
	return !this->operator==(rhs);      // 기존 만들어 놓은 함수 재 사용
}

const Complex Complex::operator+(const Complex& rhs) const{

	Complex result(re_ + rhs.re_, im_ + rhs.im_);
	return result;  // result 지역객체라서 Complex& 안됨 -> 성능떨어지더라도 어쩔 수 없다.
}

const Complex Complex::operator-(const Complex& rhs) const {

	Complex result(re_ - rhs.re_, im_ - rhs.im_);
	return result;
}

Complex& Complex::operator++() {
	
	re_ += 1.0;
	return *this;
}

Complex Complex::operator++(int) {   // value로 넘기기

	Complex tmp(*this);  // 임시 객체 만들기 복사생성자
	re_ += 1.0;

	return tmp;
}

double Complex::real() const{  // get 함수
	return re_;
}

double Complex::imag() const{  // get 함수
	return im_;
}

void Complex::real(double re) {    // set함수
	re_ = re;
}

void Complex::imag(double im) {     // set함수
	im_ = im;
}