/*
	배열을 동적 할당 및 반환
	데이터타입 *포인터 변수 = new 데이터타입[배열의 크기];
	delete [] 포인터 변수;
*/

// 사용자로부터 정수의 개수를 입력받아 배열을 동적으로 할당하고
// 정수를 입력받아 평균을 계산하여 출력하는 프로그램으로 구현하시오.

#include<iostream>
using namespace std;

int main() {
	cout << "배열의 크기 = ";
	int count;
	cin >> count;
	if (count == 0) return 0;

	// 동적할당
	int* p = new int[count]; //count크기 만큼 동적 할당
	// 예외처리
	if (!p) {
		cout << "메모리를 할당하지 못했습니다." << endl;
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << "번째 수  = ";
		cin >> p[i]; // 동적된 수는 배열처럼 사용 가능
		sum += p[i];

	}

	cout << "평균 = " << sum / count << endl;

	// 반환(소멸)
	delete[] p;

	return 0;
}