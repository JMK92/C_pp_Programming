/*
	�����Լ�(virtual Function)
	- �Ļ� Ŭ�������� �������� ������ ����ϴ� ��� �Լ�
	- �������̵�(overriding) : �θ�� �ڽ� ������ �̸��� ������ �ִ� �޼���
	  ���� : ����Ÿ�Ӱ� �Ű������� ���ƾ� �Ѵ�.
	  �ڽİ�ü�� �޼���� ȣ��ȴ�.

	- Ű����
	  virtual ����Լ��� ����;
*/

#include<iostream>
using namespace std;

class A {
public :
	virtual void disp(){  // �����Լ�(�߻�޼���)
		cout << "A Ŭ������ disp() �Լ�" << endl;
	}
};

class B : public A {
public:
	virtual void disp() {
		cout << "B Ŭ������ disp() �Լ�" << endl;
	}
};

int main() {
	// ������ : �θ�ü�� �ڽ� ��ü�� ��Ƽ� ǥ���ϴ� ��
	A* ptr;    // ��ü ����Ʈ ����
	A obj_a;
	B obj_b;

	ptr = &obj_a;
	ptr->disp();

	ptr = &obj_b;  // �θ� �����Ϳ� �ڽ� ��ü�� ����. -> ������
	ptr->disp();   // �ڽ� ��ü�� ȣ��
	return 0;
}