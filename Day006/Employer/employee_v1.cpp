/*
	��Ӱ� ������ �׸��� �߻�޼���
	ȸ�翡�� �������� �޿��� ������ �������� ���α׷� ����
	������(Permanent)���� ���� - �̸��� �޿�
	���ο� �������, �Ŵ� ���޵Ǵ� �����޿� ����, ��������
*/

#include<iostream>
#include<string>
using namespace std;

class Permanent {
	string name;
	int salary;

public:
	Permanent(string name, int pay)
		: name(name), salary(pay){}

	// getter or setter
	int getPay() {
		return salary;
	}

	void disp() {
		cout << "�̸� : " << name << endl;
		cout << "�޿� : " << getPay() << endl << endl;
	}
};

// ��ü ���� �迭
Permanent* empList[100];    // 100�� ���� ����
int empNum = 0;

// ���ο� ������� ���� �޼���
void addEmployee(Permanent*emp) { // empList�� �����Ͷ�  �޴� �͵� ������ ���� �Ѵ�.
	//string name;
	//int pay;
	//cout << "���� �̸� = ";
	//cin >> name;
	//cout << "�޿� = ";
	//cin >> pay;

	//empList[empNum++] = new Permanent(name, pay);  // ���� �Է� �޾Ƽ� ���
	empList[empNum++] = emp;
}

// ���޵Ǵ� �����޿��� ������ ���� �޼���
void showTotalSalary() {
	int tot = 0;

	for (int i = 0; i < empNum; i++) {
		tot += empList[i]->getPay();
	}

	cout << "�޿��� ���� : " << tot << endl;
}

// ��ü ��ϵ� ������ ������ ����ϴ� �޼���
void showAllSalary() {
	for (int i = 0; i < empNum; i++) {
		empList[i]->disp();
	}
}

int main() {
	/*int inwon;

	cout << "����� ���� �� = ";                         // Ű����� ���� �Է¹޾Ƽ� ���
	cin >> inwon;

	for (int i = 0; i < inwon; i++) {
		cout << i + 1 << "��° �������" << endl;
		addEmployee();

	}*/
	// �������
	addEmployee(new Permanent("aaa", 1000));
	addEmployee(new Permanent("bbb", 1000));
	addEmployee(new Permanent("ccc", 1000));
	//addEmployee();


	// �޿�����
	showTotalSalary();

	// ��������
	showAllSalary();

	return 0;
}