/*
	��ü�������� ���α׷��� : Ŭ����, ĸ��ȭ(��������), ���
	���, ������, �߻�ȭ
	���(Inheritance) : �θ��� ���� �ڽ��� �����޴� ��.
	- Ŭ������ Ŭ�������� ����� ���Ѵ�.
	- �θ�Ŭ���� or ����Ŭ���� or ���Ŭ����
	- �ڳ�Ŭ���� or ����Ŭ���� or �Ļ�Ŭ����

	Ŭ���� ��ɿ� ���� 
	- Entity Class or Data Class      : �ܼ��� �����͸� ��� ��Ȱ
	- Control Class or Handler Class  : ���� �����͸� ������ ó���ϴ� �뵵�� ���Ǵ� Ŭ����
*/

#include<iostream>
#include<string>
using namespace std;

//  Entity Class : �ܼ��� �������� �帧�� �˰� �ִ� Ŭ����
class Permanent {
	string name;         // �����̸�
	int salary;          // �����޿�

public:
	Permanent(string name, int money)                           /// �ܼ��� �����ִ� �� -> Entity Class
		:salary(money), name(name) {
	}
	int getPay() const {
		return salary;
	}

	void showSalaryInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "�޿� : " << salary << endl << endl;
	}
};

// Handler Class
class EmployeeManager {
private:
	// ��ü ������ �迭 : �����Ҵ�.
    // Ŭ������ ������ ���� = new Ŭ������(�Ű�����);
	Permanent* emplist[100];                                  /// Handler Class
	int empNum = 0;

public:
	EmployeeManager(): empNum(0){}


	// ��������ϴ� �޼���
	void AddEmployee(Permanent* p) {
		emplist[empNum++] = p;
	}

	// �Ŵ� ���ݵǴ� ������ �޿��� ������ ����ϴ� �޼���
	void showTotalSalary() const {     // ��� �ʵ带 �ٲٴ� ���� ���⶧����.
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += emplist[i]->getPay();    // return

		cout << "��ü ������ �޿� = " << sum << endl << endl;
	}

	// ��� ������ ������ ����ϴ� �޼���
	void showAllSalary() const {                 // const�� ���(Ŭ�������)���� �ٴ´�.
		for (int i = 0; i < empNum; i++)
			emplist[i]->showSalaryInfo();
	}

	~EmployeeManager() {
		for (int i = 0; i < empNum; i++)
			delete emplist[i];
	}
};




int main() {
	// ���� ���
	/*Permanent emp1("aaa", 10000);
	AddEmployee(new Permanent());
	Permanent emp2("bbb", 10000);
	Permanent emp3("ccc", 10000);*/

	EmployeeManager handler;

	// ���� ���
	handler.AddEmployee(new Permanent("aaa", 10000));
	handler.AddEmployee(new Permanent("bbb", 15000));
	handler.AddEmployee(new Permanent("ccc", 25000));

	// �����޿��� ����
	handler.showTotalSalary();

	// ��ϵ� ������ ����
	handler.showAllSalary();

	return 0;
}