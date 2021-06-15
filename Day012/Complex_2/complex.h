#pragma once
#include<iostream>
//class Complex;
//std::ostream& operator<<(std::ostream& out, const Complex& rhs);

class Complex {  // default 인자 사용은 헤더파일에서
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);  // 전역함수O - 멤버함수X
public:
	//Complex();                     // default constructor
	//Complex(double re);            // convert constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);       // right-hand-side    
	// Complex(Complex c) copy constructor(복사 생성자) 값으로 넣어주면 무한으로 생성이 되기 때문에 주소로 넘겨야 함.
	~Complex();

	Complex& operator=(const Complex& rhs);
	Complex& operator+=(const Complex& rhs);
	// +=, -=, *=, /=

	bool operator==(const Complex& rhs) const; // 바뀌지 않으니깐
	bool operator!=(const Complex& rhs) const;
	// !=, >, <, >=, <=

	const Complex operator+(const Complex& rhs) const;
	const Complex operator-(const Complex& rhs) const; 
	// -, *, /
	
	// complex operator에는 ++ 맞지 않지만 예로 억지로 만듬
	Complex& operator++();    // prefix  - 앞에 붙히기// 자기자신이 바뀌니 constX
	Complex operator++(int); // postfix - 뒤에 붙히기
	// ++, --
	// etc.

	double real() const;     // const를 앞에 붙이면 반환값이 const    // get 함수
	double imag() const;

	void real(double re);       // set 함수
	void imag(double im);

private:
	double re_;
	double im_;
};

