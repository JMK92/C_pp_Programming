/*
	동적 메모리 할당 및 반환
	동적 메모리 할당 : 프로그램을 작성하는 단계에서 메모리를 확보하는 것이 아니라
	                   프로그램을 수행하는 과정에서 필요한 공간을 확보.
	- C언어 : malloc() => 할당, free() => 반환
	- C++   : new() => 할당, delete() => 반환
	- JAVA  : new() => JVM에서 자동으로 소멸(반환)

	- C++ 동적메모리 할당 : new연산자, delete연산자
	데이터타입 * 포인터 변수 = new 데이터타입; => 동적할당
	delete 포인터변수; => 반환
*/

// 정수를 받아서 배열에 저장한 후 가장 큰 수를 출력하는 프로그램
// 이때, 입력받은 정수를 배열에 담되 입력된 값이 0이면 종료


#include<iostream>
using namespace std;
#define MAX 100

int main() {
	//int num[3]; // 4byte * 100 -> 다 쓰지 못하면 , 만약 100이 아니라 3이면 -> 데이터가 늘어나면 에러가 발생함
	//int su, i=0;

	//while (true) {
	//	cout << "수 = ";
	//	cin >> su;
	//	if (su == 0) break;
	//	if (i > 2) {
	//		int num[5];
	//	}                       // 배열 재구성 -> 비효율 => 동적 할당으로 보완
	//	num[i] = su;
	//	i++;
	//}

	//for (int j = 0; j < 1; j++)
	//	cout << num[j] << endl;

	////////////////////////////////////////////////////////////////////////////////////
	
	int* p;

	p = new int; // int값 하나를 저장할 공간을  동적 할당
	if (!p) { // 할당되지 않으면
		cout << "동적메모리 할당이 되지 않았습니다." << endl;
		return 0;
	}

	*p = 5;
	int n = *p; //n변수 집어 넣기

	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;
	
	//반환 
	delete p; // n을 쓰면 에러

	return 0;
}
