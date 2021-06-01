/*
	배열의 크기를 얻어오는 다른 방법

*/

#include<iostream>
using namespace std;

int main() {
	int a[] = {15, 20, 35, 11, 33, 22, 57, 66, 18, 25, 77, 36};  // 초기값이 주어지면 배열 크기 생략 가능.
	//char b[5] = { 'a', 'b', 'c', 'd', 'e' };  // 초기화 하는 방법.
	//float c[7] = {1.2f, 2.4f};  // 빈칸 나머지 값은 0으로 채워짐.
	int len = sizeof(a) / sizeof(a[0]); // 배열의 크기를 얻어옴.

	for (int i = 0; i < len; i++) {
		cout << a[i] << endl;
	}


	return 0;
}