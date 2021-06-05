/*
	const(= constant, 상수) : 값을 상수로 선언한다.
	- 값을 변경할 수 없도록 한다.
*/

#include<iostream>
using namespace std;

int main() {
	//int num1 = 10;
	//const int num2 = 20;    // #define num2 20

	int value1 = 5, value2 = 11;
	//const int* ptr = &value1;    // ptr 포인트 변수를 상수화 하였다. -> *ptr의 값은 못바꿈. ptr이 가리키는 주소는 변경가능
	//int* const ptr = &value1;                                   //   -> 포인트 주소 값 변경 X
	const int* const ptr = &value1                              //  -> 둘다 못함
	//const const ptr = &value1;          // value 1의 값을 상수화
	//value1 = 10;                // ptr = 10;

	//*ptr = 10;
	//ptr = &value2;


	cout << value1 << " : " << *ptr << endl;

	return 0;
}