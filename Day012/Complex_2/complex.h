#pragma once
#include<iostream>
//class Complex;
//std::ostream& operator<<(std::ostream& out, const Complex& rhs);

class Complex {  // default ���� ����� ������Ͽ���
friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);  // �����Լ�O - ����Լ�X
public:
	//Complex();                     // default constructor
	//Complex(double re);            // convert constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);       // right-hand-side    
	// Complex(Complex c) copy constructor(���� ������) ������ �־��ָ� �������� ������ �Ǳ� ������ �ּҷ� �Ѱܾ� ��.
	~Complex();

	Complex& operator=(const Complex& rhs);
	Complex& operator+=(const Complex& rhs);
	// +=, -=, *=, /=

	bool operator==(const Complex& rhs) const; // �ٲ��� �����ϱ�
	bool operator!=(const Complex& rhs) const;
	// !=, >, <, >=, <=

	const Complex operator+(const Complex& rhs) const;
	const Complex operator-(const Complex& rhs) const; 
	// -, *, /
	
	// complex operator���� ++ ���� ������ ���� ������ ����
	Complex& operator++();    // prefix  - �տ� ������// �ڱ��ڽ��� �ٲ�� constX
	Complex operator++(int); // postfix - �ڿ� ������
	// ++, --
	// etc.

	double real() const;     // const�� �տ� ���̸� ��ȯ���� const    // get �Լ�
	double imag() const;

	void real(double re);       // set �Լ�
	void imag(double im);

private:
	double re_;
	double im_;
};

