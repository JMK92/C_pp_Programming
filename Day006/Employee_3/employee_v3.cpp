/*
	���(Inheritance)    : ���Ŭ����, �Ļ�Ŭ����
	����(Employee)       : �̸�
		������(Permanet) : �̸�, �޿�(�⺻��)
		������(Sales)    : �̸�, �޿�(�⺻�� + ����(�ǸŽ���* ���ʽ�))
		�ӽ���(Temporary): �̸�, �޿�(�ٹ��ð�*�ð���޿�)
		�ؿܿ�����(ForrignSales) : �̸�, �޿�(�⺻�� + ���� + Ư������)
		                           Ư������(�������)
								   A ���� : �⺻�� + ���� ������ 3% ���� Ư������
								   B ���� : 5%
								   C ���� : 7%
*/
#include<iostream>
#include<string>
using namespace std;

/*
	Ŭ���� �̸� : Employee(�ֻ��� Ŭ����)
	Ŭ���� ���� : Entity Ŭ����
*/
class Employee {
	string name;

public:
	Employee(string name): name(name) {}

	void setName(string name) {
		this->name = name;
	}

	string getName() const{
		return name;
	}

	// �߻�޼���(�����Լ�) abstract
	 virtual int getPay() const {  // virtual -> �߻�޼��尡 �ȴٴ� �ǹ�.
		return 0;    // �ݵ�� ������ �־�� �Ѵ�. �ڽİ��� ������.
	}

	 void showName() const {
		 cout << "�̸� : " << name << endl;

	}

	virtual void disp() const {}  // �θ�� �ڽ��� ���� �޼���� ���ϵ�void�� ���� �̶��� �߻�޼��� ��� -> virtual.
};

/*
	Ŭ���� �̸� : Permanent
	Ŭ���� ���� : Entity Ŭ����
*/

class Permanent : public Employee {
	int salary;

public:
	Permanent(string name, int pay) 
		: Employee(name), salary(pay){}

	void setPay(int pay) {
		salary = pay;
	}

	int getPay() const {
		return salary;
	}

	/*
		�����ε�   : ������ �̸��� ���� �޼��带 ������ ���� 
					��, �Ű������� ������ �ٸ��ų� ������Ÿ���� �޶�� �Ѵ�.
		�������̵� : ������ 
					�θ�� �ڽ��� ���� �̸��� �޼��带 ���� ��
					�ڽ� *�޼���* ���� ����. => �߻�޼���(����޼���)
					�ʵ�� �θ𲨰� ������ �ȴ�. 					 
	*/

	void disp() const {
		//Employee::disp();
		showName();
		cout << "�޿� : " << getPay() << endl << endl;
	}

};

class Sales : public Employee{
	int salary;
	int salesResult;   // �������
	int bonus;         // ����

public:
	Sales(string name, int salary,int result,int bonus)
		: Employee(name), salary(salary), salesResult(result), bonus(bonus) {}

	int getPay() const {
		return salary + (salesResult * bonus);
	}

	void disp() const {		
		showName();
		cout << "�޿� : " << getPay() << endl << endl;
	}
};

class Temporary : public Employee{
	int times;    // �ٹ� �ð�
	int pay;      // �ð��� �޿�

public:
	Temporary(string name, int times, int pay)
		: Employee(name), times(times), pay(pay){}

	int getPay() const {
		return times * pay;
	}

	void disp() const {
		showName();
		cout << "�޿� : " << getPay() << endl << endl;
	}
};

class ForignSales : public Employee {
	int pay;
	int result;
	int bonus;
	char rate;

public:
	ForignSales(string name, int pay, int result, int bonus, char r) 
		: Employee(name), pay(pay), result(result), bonus(bonus),  rate(r) {}

	int getPay() const {
		if(rate == 'A') {
			return (pay + (result * bonus)) * 1.3;
		}
		else if (rate == 'B') {
			return (pay + (result * bonus)) * 1.5;
		}
		else (rate == 'C') {
			return (pay + (result * bonus)) * 1.7;
		}
	}
};


class EmployeeManager {
	// ��ü ���� �迭
	Employee* empList[100];    // 100�� ���� ���� ( ������, ������, ����� ������� 100��)
	int empNum;

public:
	EmployeeManager() :empNum(0) {}    // �ʱ�ȭ ���� ���� -> ������ ��� ���� ���� ���ٰŶ�

	// ���ο� ������� ���� �޼���
	void addEmployee(Employee* emp) { // empList�� �����Ͷ�  �޴� �͵� ������ ���� �Ѵ�		
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

	~EmployeeManager() {
		// �����Ҵ���� ������ ��ȯ�ϴ� ��Ȱ
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main() {
	EmployeeManager manager;

	// �������
	manager.addEmployee(new Permanent("aaa", 1000));
	manager.addEmployee(new Permanent("bbb", 1000));
	manager.addEmployee(new Permanent("ccc", 1000));

	manager.addEmployee(new Sales("lee", 100, 1000, 2));
	manager.addEmployee(new Sales("park", 100, 3000, 2));
	manager.addEmployee(new Sales("kim", 100, 5000, 2));

	manager.addEmployee(new Temporary("�̾˹�", 42, 80));
	manager.addEmployee(new Temporary("���˹�", 60, 80));
	manager.addEmployee(new Temporary("�׾˹�", 100, 80));

	manager.addEmployee(new Temporary("yyy", 100, 1000, 2, ));
	manager.addEmployee(new Temporary("���˹�", 60, 80));
	manager.addEmployee(new Temporary("�׾˹�", 100, 80));
	//addEmployee();


	// �޿�����
	manager.showTotalSalary();

	// ��������
	manager.showAllSalary();

	return 0;
}
