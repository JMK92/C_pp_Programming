/*
	Aȸ���� ���� �޿����� ���α׷�
	����� : Employee
	������ : Permanent - �����̸�, �޿�(�⺻��)
	������ : Sales - �����̸�, �޿�(�⺻�� + �Ǹż��� * ���ʽ�)
	�ӽ��� : Temporary - �����̸�, �޿�(�ñ� * �ٹ��ð�)
*/

#include<iostream>
#include<string>
using namespace std;
#pragma warning(disable:4996)

class Employee {  // �ֻ��� Ŭ����
	string name;

public:
	Employee(string name) : name(name){}
	
	int getPay() {
		return 0;     // �ڽĿ� �ִ� ���� �θ𿡰� ���������� ���ƾ� �Ѵ�. ���� �̸� �޼��尡 ������ ������ �ϸ� �ڽİ��� ������ �ȴ�. => �߻�޼���
	}

	void showName() {
		cout << "�̸� : " << name << endl;
	}

	void show() {
		showName();                // �θ� �ִ� show�� ȣ��
		cout << "�޿� : " << getPay() << endl << endl;
	}
};


/*
	Ŭ���� �̸� : Permanent
	Ŭ���� ���� : Entity Ŭ����
*/

class Permanent : public Employee{
	int salary;

public:
	Permanent(string name, int pay)
		: Employee(name), salary(pay){}   //Employee(name) �θ������ ȣ�� string name���� �ʱ�ȭ.

	int getPay() {
		return salary;
	}

	void show() {
		showName();                // �θ� �ִ� show�� ȣ��
		cout << "�޿� : " << getPay() << endl << endl;
	}
};

class Sales {
	string name;
	int salary;
	int salesResult;    // �Ǹ� ����
	int bonus;          // ���� ����
};

class Temporary {
	string name;
	int times;          // �ٹ� �ð�
	int pay;            // �ð��� �޿�
};



/*
	Ŭ���� �̸� : EmployeeManager
	Ŭ���� ���� : Handler Ŭ����
*/


class EmployeeManager {
	// ��ü ���� �迭 
	Employee* empList[100];      // Employee�� �ֻ��� Ŭ���� Employee �ȿ�  Permanet�� �ִ´�.
	int empNum;

public:
	EmployeeManager(): empNum(0){}

	

	// ��������� �����ϴ� �޼���
	void addEmployee(Employee*p){ // emplist, empNum�� ���� �������� �ּҸ� ������ �´�.
		empList[empNum++] = p;
	} 

	// �����޿��� ������ ����ϴ� �޼���
	void showTotalSalary() {
		int total = 0;
		for (int i = 0; i < empNum; i++) {
			total += empList[i]->getPay();            // Employee�� �ڽ��� �޼��带 ����.			    
		}
		cout << "�޿� ���� : " << total << endl;
	}

	// ��� ������ ������ ����ϴ� �޼���
	void showAllEmployee() {
		for (int i = 0; i < empNum; i++) {
			empList[i]->show();
		}
	}

};

// �ϳ��� controller�� ��� Ŭ������ control �ؾ� �Ѵ�.

int main() {
	           
	EmployeeManager manager;

	//�������
	manager.addEmployee(new Permanent("aaa", 1000));
	manager.addEmployee(new Permanent("bbb", 1500));
	manager.addEmployee(new Permanent("ccc", 2000));

	// �޿�����
	manager.showTotalSalary();

	// ��������
	manager.showAllEmployee();

	return 0;
}


// �߻�޼��� abstract ã�ƺ���.