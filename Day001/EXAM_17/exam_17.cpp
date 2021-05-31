/*
	대입연산자(=)와 배정대입연산자(+=, -=, /=, *=, %=)
	증감연산자 : 증가와 감소를 수행하는 연산자, 단항연산자
	 - 증가 : ++
	 - 감소 : --
	 - 우선순위 : 전위증감연산 / 후위증감연산
		++변수 : 변수를 1증가, --변수 : 변수를 1 감소 => 전위연산자 (순위 가장 높음)
		변수++ , 변수--
		최우선연산자 : (), [배열], .(direct 연산자), 단항연산자(전위증감연산자, 논리부정(!), 비트부정(~), 부호연산(+/-))
		
*/

#include<iostream>
using namespace std;


int main() {
	//int num1 = 8;
	//int num2 = 8;
	//int num3 = 8;
	int num1, num2, num3;
	num1 = num2 = num3 = 8;  // 대입연산자 연산 방향 : 오른쪽에서 왼쪽(<-)

	num1 = num1 + 5;
	num2 += 5; // ( num2 = num2 + 5 )
	num3 =+ 5; //  num3에 5를 대입 (권장X) - 단순대입연산자

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;


	return 0;
}