/*
	��������� static
	- ���������� static : �ش� ���Ͽ����� ������ ����Ѵٴ� �ǹ�
	- ���������� static : �ѹ��� �ʱ�ȭ�ǰ�, �Ϲ����� ���������� �޸� �Լ��� ����� �Ҹ���� �ʴ´�.
*/

#include<iostream>
using namespace std;
// static���� ����� ������ ���������� ���������� �ʱ�ȭ���� ������ 0���� �ʱ�ȭ �ȴ�.


void counter() {
	static int cnt;  // 0
	// int cnt = 0;  
	cnt++;
	cout << "Current cnt = " << cnt << endl;
}
 
//int x;  // ��������  -> �⺻������ 0���� �ʱ�ȭ �ȴ�.

int main() {
	//int y;  // ��������  -> �ݵ�� �ʱ�ȭ�� �ؾ� �Ѵ�.

	/*cout << "x = " << x << endl;
	cout << "y = " << y << endl;*/

	
	for (int i = 0; i < 10; i++) // int cnt = 0���� �θ� ��� �ʱ�ȭ�� �Ǿ 1�� ����� �ȴ�.
		counter();              // static cnt�� �ʱ�ȭ���� �ʰ� �����̵Ǿ� 1 ���� 10���� ���.


	
	return 0;
}