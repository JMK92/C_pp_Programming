/*
	��ũ�� �Լ��� �ζ��� �Լ�ȭ.
	- ���� : ���� �ӵ��� ������.
	- ���� : �� �ٿ� ����ؾ� �Ѵ�.
*/

#include<iostream>
#define SQUARE(x) (x * x) // ��ũ�� �Լ� ->������ ������ ����, ���ٷθ� �ۼ� O, �ڷ��� ������
using namespace std;     

inline int SSS(int x) {  //  �ζ��� �Լ� : ���α׷��ȿ� ����, ���ٷθ� �ۼ� X,  �ڷ��� ������X => �ӵ� ������.
	return x * x;
}

int main() {

	cout << SQUARE(5.1f) << endl; // ��ũ�κ����� �ڷ��� ������ �ʰ� �� ó���ϰ�
	cout << SSS(5.1f) << endl; // �ζ����Լ��� �ڷ��� int�� �־����־ 5.1f�� 5�� �ٲ㼭 �����
	return 0;
}