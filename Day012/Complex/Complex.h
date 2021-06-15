#pragma once

class Complex {  // default ���� ����� ������Ͽ���
public:
	//Complex();                     // default constructor
	//Complex(double re);            // convert constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);       // right-hand-side    
	// Complex(Complex c) copy constructor(���� ������) ������ �־��ָ� �������� ������ �Ǳ� ������ �ּҷ� �Ѱܾ� ��.
	~Complex();

	Complex& operator=(const Complex & rhs);
	// +=, -=, *=, /=

	bool operator==(const Complex & rhs);
	// !=, >, <, >=, <=

	const Complex operator+(const Complex & rhs);
	// -, *, /
	// ++, --
	// etc.

	double real();              // get �Լ�
	double imag();

	void real(double re);       // set �Լ�
	void imag(double im);

private:
	double re_;
	double im_;
};
