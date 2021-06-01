#include<iostream>
using namespace std;

struct Prop {
	int saving;   // 적금
	int loan;     // 대출금
};

// 함수 선언
int CalcProperty(int, int);

int main() {
	int hong;

	Prop aaa = {10000000, 4000000}; // 구조체 초기화.
	 
	hong = CalcProperty(aaa.saving, aaa.loan);  // 접근을 구조체와 .(다이렉트 연산자) 를 사용.

	cout << "홍길동의 재산은 적금 " << aaa.saving << "원 이고," << endl;
	cout << "대출은 " << aaa.loan << "을 제외한 총 " << hong;

	return 0;
}

// 함수 정의 -> 정의를 사용하기 위해 앞에 선언을 해야 한다.
int CalcProperty(int s, int l) {
	return s - l;
}