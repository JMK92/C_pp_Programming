/*
	포인터(pointer) : 메모리의 주소를 가르키는 것
	- 포인터 변수 : 메모리의 주소값을 저장하는 변수
		int a;  // 일반 변수
		int* p; // 포인터 변수

	- 접근속도를 빠르게 하기 위해서
	- 배열처럼 대용량 데이터를 담고 있는 자료구조에 함께 사용된다.
	- 포인터 연산 : +/-, ++/--
*/

#include<iostream>
using namespace std;

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* p;

	p = arr; // 배열명은 배열의 시작주소와 같다.(&arr[0])

	//cout << "arr[0] = " << arr[0] << endl;
	//cout << "p = " << *(p + 0) << endl; // 주소에 있는 값 가지고 오기 => *p와 동일
	//cout << "p+1 = " << *(p + 1) << endl; // 20을 가지고 오고 싶을 때
	//cout << "p+2 = " << *(p + 2) << endl;
	//cout << "p+3 = " << *(p + 3) << endl;
	//cout << "p+4 = " << *(p + 4) << endl;

	/*for (int i = 0; i < 5; i++) {
		cout << *(p + i) << endl;
	}*/

	for (int i = 0; i < 5; i++) {
		cout << *p++ << endl; // *p 실행되고 나서 ++ 실행이 됨. 우선순위는 * 먼저.
	}
	return 0;
}