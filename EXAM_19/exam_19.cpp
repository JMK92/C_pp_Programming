/*
	�񱳿����� : �� �ǿ������� ��Ұ��踦 ���ϴ� ������
	- ������ ����� true or false�� ���
	- ���� : ==(����), !=(�����ʴ�), > , >=, <, <=

	�������� : ����(true or false)�� �̿��ؼ� ������ �����ϴ� ������
	- ���� : &&(and), ||(or) - ���� / !(not) - ����
	- ������ ����� true or false
	- �ϳ��̻��� �񱳿����ڸ� ��� ����� ������ �� ���
	- && : ���, �̰�, �� ���ǽ� ��� ���� �� ����� ��
	- || : �̰ų�, �Ǵ�, ����� �ϳ��� ���̸� ����� ��
	- ! : ���̸� ����, �����̸� ��
*/

#include<iostream>
using namespace std;
/*
int main() {
	int num1 = 3, num2 = 7;

	cout << "!= ������ " << (num1 != num2) << endl;  // true(1)
	cout << ">= ������ " << (num1 >= num2) << endl;  // false(0)

	return 0;
}
*/

int main() {
	int num1 = 3, num2 = -7;
	bool res1, res2;

	res1 = (num1 > 0) && (num1 < 5);  // true && true = true(1)
	res2 = (0 > num2) || (num2 > 10); // true || fasle = true(1)


	cout << "&& = " << res1 << endl;  // true(1)
	cout << "|| = " << res2 << endl;  // false(0)
	cout << "!= " << !res2 << endl;   //false
	cout << "!= " << !5 << endl; // C�� ����.(���� X) - 0�� �ƴϸ� �� ������ ����

	return 0;
}