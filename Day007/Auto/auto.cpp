/*
	C++에서 auto
	- 컴파일러에게 변수 선언문에서 추론하여 타입을 자동으로 선언하도록 지시
	- 장점 : 변수 선언을 간결, 긴타입에 선언을 오타없이 작성
*/

#include<iostream>
using namespace std;

int main() {
	auto pi = 3.141592;  // double 안쓰고 auto을 사용하면 자동으로 double로 선언
	auto num = 3;        
	auto* p = &num;      

	int num2 = 10;
	int& ref = num2;   // 참조자(별명)
	auto ref2 = ref;   // 쓰는 분들도 있다.-> 비효율적이라고 생각.

	return 0;
}