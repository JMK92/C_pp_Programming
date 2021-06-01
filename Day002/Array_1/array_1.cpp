/*
	배열(Array)
	- 동질의 자료형을 하나의 이름으로 묶어서 관리하는 자료구조
	- 기억장소의 낭비를 줄이고 처리속도를 빠르게 하기 위해
	- 1차원 배열과 다차원 배열(2차원 배열....)
	- 배열을 선언
	  int a;                // 일반 선언
	  int arr[배열의 길이];  // 배열명
	- 배열의 인덱스는 0부터 시작한다.
	- 배열 선언 하고 초기화 하지 않으면 쓰레기 값으로 채워진다.
	- 변수(Variable)
	- 배열(Array)
	- 구조체(structure) : 서로 다른 자료형을 하나의 이름으로 묶는 자료형
	- 클래스(class)
*/

#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	int arr[3];

	a = 10;
	b = 20;
	c = 30;

	cout << sizeof(int) << "bytes" << endl; // 각각 다른 공간에 저장
	cout << a << " : " << &a << endl;
	cout << b << " : " << &b << endl;
	cout << c << " : " << &c << endl;

	arr[0] = 10; // 선언과 동시에 값을 주는게 좋다.
	arr[1] = 20;
	arr[2] = 30;
	cout << sizeof(arr) << "bytes" << endl;    // 연속되 공간에 저장.
	/*cout << arr[0] << " : " << &arr[0] << endl;
	cout << arr[1] << " : " << &arr[1] << endl;
	cout << arr[2] << " : " << &arr[2] << endl;*/

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " : " << &arr[i] << endl; // 배열을 사용하는 특징 : 반복문을 사용할 수 있다.
	}

	return 0;
}