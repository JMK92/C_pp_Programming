/*
	���� ��� for��
	for(�������� : ���պ���)
*/

#include<iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };

	//for (int i = 0; i < 5; i++)
	for(int i : arr)          // Ư�������� ���� �Ǿ� ������ => {1, 2, 3, 4, 5}
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}