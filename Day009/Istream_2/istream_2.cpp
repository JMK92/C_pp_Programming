/*
	istream get(char& ch)�� �̿��ؼ� �� ������ ���ڸ� �о���� �۾�
*/

#include<iostream>
using namespace std;

int main() {    // Istream ���ϰ� �ٸ����� ���ϰ��� char�̳� int ����
	char ch;
	while (true) {
		cin.get(ch);    // �Է¹��� ���ڸ� ch�� �����Ͽ� ����

		if (cin.eof()) break;  // eof�� ������ �б� ����
		cout.put(ch);

		if (ch == '\n') break;  // �Է��ϴٰ� enterŰ ������ �ݺ��� ����
	}

	return 0;
}