#include<iostream>
#include<string>
using namespace std;

//int x;    // ��������

void aaa() {
	static int x = 0;     // �������� -> static ���̸� �� �ѹ��� �ʱ�ȭ ��Ų��.
	x++;
	cout << x << endl;
}

int main() {

	for (int i = 0; i < 10; i++)
		aaa();

	return 0;
}