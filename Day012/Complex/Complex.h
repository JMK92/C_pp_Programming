#pragma once

class Complex {  // default 인자 사용은 헤더파일에서
public:
	//Complex();                     // default constructor
	//Complex(double re);            // convert constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);       // right-hand-side    
	// Complex(Complex c) copy constructor(복사 생성자) 값으로 넣어주면 무한으로 생성이 되기 때문에 주소로 넘겨야 함.
	~Complex();

	Complex& operator=(const Complex & rhs);
	// +=, -=, *=, /=

	bool operator==(const Complex & rhs);
	// !=, >, <, >=, <=

	const Complex operator+(const Complex & rhs);
	// -, *, /
	// ++, --
	// etc.

	double real();              // get 함수
	double imag();

	void real(double re);       // set 함수
	void imag(double im);

private:
	double re_;
	double im_;
};
