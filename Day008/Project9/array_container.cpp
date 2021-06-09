/*
	 배열의 크기가 일정하지 않을 때	
*/
#include<iostream>
#include<array>
using namespace std;

template<size_t N>
void PRINT(array<int, N> arr){
	/*for (auto element : arr)
		cout << element << " ";*/
	for (auto it = arr.begin(); it != arr.end(); it++) {
		auto element = *it;
		cout << element << " ";
	}
	cout << endl;
}

int main() {
	array<int, 5> arr = { 1, 2, 3, 4, 5 };
	PRINT(arr);

	array<int, 8> arr1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
	PRINT(arr1);

	array<int, 6> arr2 = { 1, 2, 3, 4, 5, 6 };
	cout << arr2.front() << endl;  // 1
	cout << arr2.back() << endl;   // 6
	/*
		data() : 배열 객체 내부에서 실제 데이터가 저장된 위치를 가르키는 포인터
	*/

	cout << *(arr2.data()+1) << endl; // 2
	return 0;
}

