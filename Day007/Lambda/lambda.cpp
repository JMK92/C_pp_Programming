/*
	C++ ���ٽ��� ����
	- ĸó ����Ʈ[] : ���ٽĿ��� ����ϰ��� �ϴ� �Լ� �ٱ��� ���� ���
	- �Ű�������()
	- ����Ÿ��'->' // ��������
	- �Լ��������Ǻ� {...} : ���ٽ��� �Լ� �ڵ�
	----------------------------------------
	int func(int x, int y){
		return x+y;
	}

	[](int x, int y) -> int{return x+y;};

	---------------------------------------
	void func(int x, int y){
		cout << x+y;
	}

	[](int x, int y){ cout << x+y;};
	-----------------------------------------
	[](int x, int y){cout << x+y;}(2, 3); // 2�� 3�� x, y �Ű����� ����
		
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	[](int x, int y) {cout << x + y << endl; }(2, 3); // 2�� 3�� x, y �Ű����� ����


	auto love = [](string a, string b) {        // ���ٽ��� ���� Ÿ���� ����ڰ� �����ָ� error -> auto ���
		cout << a << " ���� " << b << "�� ����" << endl;
	}; // ���� ǥ������ �ڿ� ; �ٿ� ��� �Ѵ�.

	love("�ø�", "����");

	return 0;
}