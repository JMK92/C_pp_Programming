/*
	매크로 함수의 인라인 함수화.
	- 장점 : 실행 속도가 빠르다.
	- 단점 : 한 줄에 기술해야 한다.
*/

#include<iostream>
#define SQUARE(x) (x * x) // 매크로 함수 ->별도의 공간에 저장, 한줄로만 작성 O, 자료형 독립적
using namespace std;     

inline int SSS(int x) {  //  인라인 함수 : 프로그램안에 저장, 한줄로만 작성 X,  자료형 독립적X => 속도 빠르다.
	return x * x;
}

int main() {

	cout << SQUARE(5.1f) << endl; // 매크로변수는 자료형 따지지 않고 다 처리하고
	cout << SSS(5.1f) << endl; // 인라인함수는 자료형 int로 주어져있어서 5.1f를 5로 바꿔서 계산함
	return 0;
}