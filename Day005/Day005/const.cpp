/*
	const(= constant, ���) : ���� ����� �����Ѵ�.
	- ���� ������ �� ������ �Ѵ�.
*/

#include<iostream>
using namespace std;

int main() {
	//int num1 = 10;
	//const int num2 = 20;    // #define num2 20

	int value1 = 5, value2 = 11;
	//const int* ptr = &value1;    // ptr ����Ʈ ������ ���ȭ �Ͽ���. -> *ptr�� ���� ���ٲ�. ptr�� ����Ű�� �ּҴ� ���氡��
	//int* const ptr = &value1;                                   //   -> ����Ʈ �ּ� �� ���� X
	const int* const ptr = &value1                              //  -> �Ѵ� ����
	//const const ptr = &value1;          // value 1�� ���� ���ȭ
	//value1 = 10;                // ptr = 10;

	//*ptr = 10;
	//ptr = &value2;


	cout << value1 << " : " << *ptr << endl;

	return 0;
}