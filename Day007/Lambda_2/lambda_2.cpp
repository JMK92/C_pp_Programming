#include<iostream>
using namespace std;

int main() {
	double pi = 3.14;   // 지역변수

	auto calc = [pi](int r) -> double {return pi * r * r; };  // double calc - error 

	cout << "면적 : " << calc(3);

	return 0;
}