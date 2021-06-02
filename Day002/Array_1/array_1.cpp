/*
	�迭(Array)
	- ������ �ڷ����� �ϳ��� �̸����� ��� �����ϴ� �ڷᱸ��
	- �������� ���� ���̰� ó���ӵ��� ������ �ϱ� ����
	- 1���� �迭�� ������ �迭(2���� �迭....)
	- �迭�� ����
	  int a;                // �Ϲ� ����
	  int arr[�迭�� ����];  // �迭��
	- �迭�� �ε����� 0���� �����Ѵ�.
	- �迭 ���� �ϰ� �ʱ�ȭ ���� ������ ������ ������ ä������.
	- ����(Variable)
	- �迭(Array)
	- ����ü(structure) : ���� �ٸ� �ڷ����� �ϳ��� �̸����� ���� �ڷ���
	- Ŭ����(class)
*/

#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	int arr[3];

	a = 10;
	b = 20;
	c = 30;

	cout << sizeof(int) << "bytes" << endl; // ���� �ٸ� ������ ����
	cout << a << " : " << &a << endl;
	cout << b << " : " << &b << endl;
	cout << c << " : " << &c << endl;

	arr[0] = 10; // ����� ���ÿ� ���� �ִ°� ����.
	arr[1] = 20;
	arr[2] = 30;
	cout << sizeof(arr) << "bytes" << endl;    // ���ӵ� ������ ����.
	/*cout << arr[0] << " : " << &arr[0] << endl;
	cout << arr[1] << " : " << &arr[1] << endl;
	cout << arr[2] << " : " << &arr[2] << endl;*/

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " : " << &arr[i] << endl; // �迭�� ����ϴ� Ư¡ : �ݺ����� ����� �� �ִ�.
	}

	return 0;
}