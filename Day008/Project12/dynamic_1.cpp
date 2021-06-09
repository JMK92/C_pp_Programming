/*
	동적 메모리 할당 : 동적으로 메모리를 할당 받아 사용하는 것
	- heap 영역에 저장된다. => 스택(stack) 
	- C : malloc() / free()
	- C++ : new / delete
	- 기타언어 : new 
*/

#include<iostream>
using namespace std;

//int main() {
//	// 정수 한개를 저장하는 동적할당 메모리를 선언
//	int* p = new int;  // 4byte
//
//	*p = 10;
//
//	cout << *p << endl;
//
//	delete p;  // 동적할당 메모리 반환.
//
//	return 0;
//}

int main() {

	int a = 5;


	//delete &a -> 사용할 수 없다. delete는 new가 있어야 한다.


	return 0;
}