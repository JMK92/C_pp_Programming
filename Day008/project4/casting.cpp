/*
	����ȭ(casting) : �ڷ��� ���� ��ȯ�ϴ� �۾�
	
	- �ڵ�����ȯ(����������ȯ, promotion)
	  : ū ������ ���� �����͸� ��� ����
	  : �������� �ս��� �߻����� �ʴ´�.
	
	- ��������ȯ(���������ȯ, casting)
	  : ���� ������ ū �����͸� ��� ����
	  : �������� �ս��� �߻��Ѵ�.

	- �ڷ����� ũ��
	bool(1) < char(1) < short(2) < int(4) < long(4) < longlong(8) < float(4) < double(8 byte) 
	1B        1B        2B         4B       4B        8B            4B         8B
	          
*/

#include<iostream>
using namespace std;

int main() {
	char a = 100;
	char b = 'A';
	int c = 100;
	long d = 100L;  // long�� ���
	float e = 3.14f;  // f �Ⱥ��̸� ������ error
	double f = 3.14;

	a = (char)d;    // ū�������� ���� �������� �����ϱ� -> casting�� �ʿ� -> �̹��(����)
	c = int(f);     // �̷��� �ص� �ȴ�. 

	return 0;

}