/*
	������(manipulator, ��Ʈ�� ������)
	- ����� ���� ������ �������� ���������.
	- �׻� << or >> �� �Բ� ���ȴ�.
	- ���� �÷��� => ios::
*/

#include<iostream>
#include<iomanip>     // using�� �ѹ��ۿ� �����ϱ� io�� ���� ������ �̷� �������� ���
using namespace std;

int main() {
	cout << hex << showbase << 30 << endl;  //0x1e
	cout << dec << showpos << 100 << endl;  // +100
	cout << true << ' ' << false << endl;  // +1 +0
	cout << boolalpha << true << ' ' << false << endl; // ���ڷ� bool
	
	return 0;
}