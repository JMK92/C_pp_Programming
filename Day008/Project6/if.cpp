/*
	조건문 : 주어진 조건에 의해 처리되는 문
	- 조건식은 반드시 그 결과가 참 또는 거짓으로 판정되어야 한다.
	- if문, switch-case문, 조건연산자(삼항연산자)

	삼항연산자 : 항을 세 개 가지고 있는 연산자
	- if-else문의 모체가 된다.
	- 형식
	  조건항? 항1: 항2;
	  or
	  변수 = 조건항? 항1 : 항2;

	  조건항(조건식)이 참이면 항1, 그렇지 않으면 항2가 실행된다.
*/

#include<iostream>
using namespace std;

// 2 개의 정수를 입력받아 큰수를 찾아 출력하는 프로그램
int main() {
	//int num1, num2, max;
	//
	//cout << "num1 = ";
	//cin >> num1;
	//cout << "num2 = ";
	//cin >> num2;

	//max = num1 > num2 ? num1 : num2; // num1이되고 그렇지 않으면 num2가 된다.

	//cout << "max = " << max << endl;

	// 3 개의 정수를 입력받아 큰수를 찾아 출력하는 프로그램
	int num1, num2, num3, max;
	
	cout << "num1 = ";
	cin >> num1;
	cout << "num2 = ";
	cin >> num2;
	cout << "num3 = ";
	cin >> num3;

	max = num1 > num2 ? num1 : num2; // num1이되고 그렇지 않으면 num2가 된다.
	max = num3 > max ? num3 : max;

	cout << "max = " << max << endl;

	return 0;

}