/*
	���۷���(Reference) & NickName(��Ī)
	- �̸��� ���� ��� ������ �ٿ��ִ� ����
	- ���� : �޸� ������ �ٿ��� �̸�, ������(���)
	- �޸� ������ �̸��� �ϳ� �� �߰��ϴ� ����
	- ����
      int& ref = val; -> int�̸��� ref��

*/

#include<iostream>
using namespace std;

int main() {
	int val = 10;
	int* pVal = &val; // �����ͺ���
	int& rVal = val; // ���۷��� ���� , val�� �Ǵٸ� �̸�

	cout << "Val = " << val << endl;
	cout << "rVal = " << rVal << endl;
	cout << "Val �ּ� = " << &val << endl;
	cout << "Val �ּ� = " << pVal << endl;

	return 0;
}