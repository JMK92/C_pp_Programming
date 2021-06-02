/*
	��ü���� ���α׷�(OOP, Object-Oriented Programming)
	- ��� �����͸� ��ü(Object)�� ����Ͽ� ó���ϴ� ��ü �߽� ���α׷�.
	- ���� ��� ���� ��ü
	- Ư¡ : �߻�ȭ, ĸ��ȭ, ��������, ��Ӽ�, ������

	Ŭ������ ��ü                                   -> ��Ȱ���� ���ؼ� ���
	- Ŭ����(class) : ��ü(Object)�� �𵨸��ϴ� ��
	  �ڷᱸ�� : ����, �迭, ����ü
	  �������(property) - �Ӽ�, ����޼���(method, �Լ�) - ������ �ൿ
	  ����������(����������) : private, public, protected    //public - �ν��Ͻ��� ����, protected - ��Ӱ��迡�� ����, private - ���� X

	- ��ü(object)�� ��ü(instance) - object�� ���� �� �� �ִ� ��ü
*/

#include<iostream>
#include<string>    // string Ŭ���� ����
using namespace std;

#include"Person.h" // ���� ����� "" ����Ѵ�.

int main() {
	// ��ü(instance)�� �����ؾ� �Ѵ�.
	Person p("ȫ�浿");
	//p.name = "ȫ�浿";

	Person q("�庸��"); // ��Ȱ���� �Ǵ� ������ ���� �� �ִ�. ��, ���� �ٸ� �������� ������ ��.
	//q.name = "�庸��";

	Person w("������");
	//w.name = "������"; // �ν��Ͻ� ���鶧 ���� name�� ����� ������ ������� -> class�� ������ �޼��带 ����� default�� ����.

	// ��ü�� �̿��ؼ� ����� ���� : direct ������(.)
	p.walk(5);
	p.run(10);

	q.walk(10);
	q.run(15);

	w.walk(20);


	return 0;
}