/*
	default parameter : ����Ʈ �Ű�����
	- �Ű������� ó������ �����ϴ� ���
	- �Լ��� �����ε��� Ȯ�����̶�� �����ص� ��.
*/

#include<iostream>
using namespace std;

int function(int a = 10) {
	return a;
}

int main() {
	
	cout << function() << endl;    // default 10�� ��µ�
	cout << function(100) << endl; // 100�� a ������ ���ȴ�.
	return 0;
}