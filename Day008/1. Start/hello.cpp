// ��ó���� :  preprocessor
#include<iostream>     // import�� ������ �ǹ̸� ���Ѵ�.

/*
	ios : input output system, �ֻ��� ��ü
	istream/ostream -> iostream
	stream(��Ʈ��) : �ó���, ���(������, �����ȣ)
	C��� #include<stdio.h>
	- string.h : ���ڿ��� ���õ� �Լ��� ���� => cstring(C++)
*/

using namespace std;  // using namespace�� 1�� �ۿ� ������.
namespace A {
	void aaa() {}
	void bbb() {}

}
/*
	�̸� ���� �̸� ����
	- namespace {..}
	- ��� ��ü�� static Ű���尡 �پ��ִ� ȿ���� ����.
*/
namespace B{
	void aaa() {}
	void bbb() {}
}

// �����Լ� or �������� or ��ũ�λ��(Ư�� ���ڰ� ������� ������ �ִ�)
/*
	#define ����� =��;
	const(=constant) : ���
	- ����� ������ �ʴ� ��, ������ ��
*/

// main �Լ� : ���α׷��� ���۰� ���� ��Ÿ���� �Լ�
int main() { // ����Ÿ�� �Լ���(�Ű�����){....}
	/*
		�̸�����(namespace)�� ����������(scopre ������, ::) - ~��
	*/
	//A::aaa();
	//std::cout << "Hello, World" << std::endl;
	cout << "Hello, World" << endl;
	/*
		printf => cout ��ü�� << ������
		scanf  => cin ��ü�� >> ������
		std : C++ ǥ�� ���̺귯���� ��� �Լ�, ��ü���� ���ǵ� �̸�����
	*/
	return 0; // 0�� �����ϱ� ����Ÿ���� int�� �Ǿ�� �Ѵ�. -> ���α׷��� �����Ѵٴ� �ǹ�.
}