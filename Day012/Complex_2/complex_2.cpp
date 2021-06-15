#include"Complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs) {

	//out << "(" << rhs.real() << ", " << rhs.imag() << "i)";
	out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";  // ������� friend�� ����� �ֱ� - private ���� ����
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

// const : ���ʿ� �ִ¾ִ� �����ʿ� �ִ¾ְ� ���� ���� �ٲ�ϱ�
Complex& Complex::operator=(const Complex& rhs) {  // ������� ��ü�� ����
	re_ = rhs.re_;
	im_ = rhs.im_;

	return *this;  // �ڱ��ڽ� ��ü
}

Complex& Complex::operator+=(const Complex& rhs) {
	re_ = rhs.re_;
	im_ = rhs.im_;

	return *this;
}

bool Complex::operator==(const Complex& rhs) const {    // ������ �� this�� ���� ����

	return (re_ == rhs.re_ && im_ == rhs.im_);
}

bool Complex::operator!=(const Complex& rhs) const {

	//return (re_ != rhs.re_ || im_ != rhs.im_);
	return !this->operator==(rhs);      // ���� ����� ���� �Լ� �� ���
}

const Complex Complex::operator+(const Complex& rhs) const{

	Complex result(re_ + rhs.re_, im_ + rhs.im_);
	return result;  // result ������ü�� Complex& �ȵ� -> ���ɶ��������� ��¿ �� ����.
}

const Complex Complex::operator-(const Complex& rhs) const {

	Complex result(re_ - rhs.re_, im_ - rhs.im_);
	return result;
}

Complex& Complex::operator++() {
	
	re_ += 1.0;
	return *this;
}

Complex Complex::operator++(int) {   // value�� �ѱ��

	Complex tmp(*this);  // �ӽ� ��ü ����� ���������
	re_ += 1.0;

	return tmp;
}

double Complex::real() const{  // get �Լ�
	return re_;
}

double Complex::imag() const{  // get �Լ�
	return im_;
}

void Complex::real(double re) {    // set�Լ�
	re_ = re;
}

void Complex::imag(double im) {     // set�Լ�
	im_ = im;
}