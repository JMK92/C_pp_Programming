#include<iostream>
using namespace std;

void func() {
	cout << "ù��° �Լ� �Դϴ�.\n";
}

float func2() {
	return 3.14f; // �Ǽ� (float, double - �⺻��)
}
int main() {
	// ���� : ������ ����� �ڷ����� �������ִ� ����
	// python - ����Ÿ����
	// C, C++, JAVA - ����Ÿ����
	int first, second, res;

#   // �Է¹�
	cout << "�� ���� ������ �Է� = ";
	cin >> first >> second;

	// ó����
	res = first + second;

	// ��¹�
	cout << first << " + " << second << " = " << res;
	
	return 0; // �ý����� �����Ѵ�.
}

	