# include<iostream>
using namespace std;

int main() {   
	int num = 12;           // ��) 100����
	int* ptr = &num;        // ������ - �ּҸ� ��´�. ptr = 100����
	int** dptr = &ptr;      // ���������� = �ּҿ� �ּҸ� ��´�.

	int& ref = num;         // �������� -> NickName( ���� ���� �ٸ� �̸� ) - num�� ref ���� ���� �ٸ� �̸�
	int* (&pref) = ptr;     // �����ͺ����� ���������� ����                - pref�� ptr ���� ���� �ٸ� �̸�
	int** (&dpref) = dptr;  // ���������� �������� ����                    - dpref�� dptr ���� ���� �ٸ� �̸�

	cout << "ref = " << ref << endl;
	cout << "pref = " << *pref << endl;
	cout << "**dpref = " << **dpref << endl;

	return 0;
}

