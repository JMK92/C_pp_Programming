/*
	istream ����Լ� - ���� �Է�, get()
*/

#include<iostream>
using namespace std;

int main() {
	int ch;
	// int get()�� �̿��Ͽ� �� ������ ���ڸ� �о���� �۾�
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);    // �о�� ���� ���
		if (ch == '\n')   // '\n' -> enterŰ
			break;
	}

	return 0;
}