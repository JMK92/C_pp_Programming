#include<iostream>
using namespace std;

int main() {
	double pi = 3.14;   // ��������

	auto calc = [pi](int r) -> double {return pi * r * r; };  // double calc - error 

	cout << "���� : " << calc(3);

	return 0;
}