/*
	범위 기반 for문
	for(개별변수 : 집합변수)
*/

#include<iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };

	//for (int i = 0; i < 5; i++)
	for(int i : arr)          // 특정범위가 한정 되어 있을때 => {1, 2, 3, 4, 5}
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}