/*
	����ü(structure type)
	- ��������� �ڷ���
	- ���� �ٸ� �ڷḦ ��� �ϳ��� ������ ó���ϴ� �ڷᱸ��
	- ���� : ������� or ����ʵ�
	- C++ ������ ���� : ����ʵ�� ����޼���� �����ȴ�.
	- Ű���� struct
*/

#include<iostream>
#include<cstring>
/*
	C���� string.h ���ϰ� �����ϴ�. C++�� �Ѿ���鼭 �̸��� ����
	strlen : ���ڿ�����
	strcpy : ���ڿ�����, ���Կ�����(=)�� ������� ���ϹǷ�
	strcmp : ���ڿ���, 0(��ġ), -1, 1
*/
#pragma warning(disable:4996)
using namespace std;

// ����ü ����
struct Employee {
	char name[20];  // 20byte, ������ - 19, �ѱ� - 9
	int pay;

	void disp(){
		cout << "������ �̸� = " << name << endl;
		cout << "������ �޿� = " << pay << endl;
	}
};

int main() {
	// ����ü���� : ��ü����
	Employee emp[3];

	//Employee emp1;
	emp[1] = { "�庸��", 200000 };  // �ʱⰪ�� �̿�
	//Employee emp3;

	

	// ����ü������ �̿��ؼ� ������� : direct������(.)
	emp[0].pay = 100000;
	//emp.name = "ȫ�浿"; // ���Կ����ڸ� ��� X -> cstring�� �ִ� strcpy���
	strcpy(emp[0].name, "ȫ�浿");

	cout << "�����̸� = ";
	cin >> emp[2].name;
	cout << "�����޿� = " << endl;
	cin >> emp[2].pay;

	/*cout << "�����̸� : " << emp[0].name << endl;
	cout << "�����޿� : " << emp[0].pay << endl;

	cout << "�����̸� : " << emp[1].name << endl;
	cout << "�����޿� : " << emp[1].pay << endl;

	cout << "�����̸� : " << emp[2].name << endl;
	cout << "�����޿� : " << emp[2].pay << endl;*/

	for (int i = 0; i < 3; i++) {
		/*cout << "������ �̸� = " << emp[i].name << endl;
		cout << "������ �޿� = " << emp[i].pay << endl;*/
		emp[i].disp();
	}

	return 0;
}
