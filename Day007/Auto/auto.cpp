/*
	C++���� auto
	- �����Ϸ����� ���� ���𹮿��� �߷��Ͽ� Ÿ���� �ڵ����� �����ϵ��� ����
	- ���� : ���� ������ ����, ��Ÿ�Կ� ������ ��Ÿ���� �ۼ�
*/

#include<iostream>
using namespace std;

int main() {
	auto pi = 3.141592;  // double �Ⱦ��� auto�� ����ϸ� �ڵ����� double�� ����
	auto num = 3;        
	auto* p = &num;      

	int num2 = 10;
	int& ref = num2;   // ������(����)
	auto ref2 = ref;   // ���� �е鵵 �ִ�.-> ��ȿ�����̶�� ����.

	return 0;
}