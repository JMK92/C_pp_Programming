/*
	A회사의 직원 급여관리 프로그램
	고용인 : Employee
	정규직 : Permanent - 직원이름, 급여(기본급)
	영업직 : Sales - 직원이름, 급여(기본급 + 판매수당 * 보너스)
	임시직 : Temporary - 직원이름, 급여(시급 * 근무시간)
*/

#include<iostream>
#include<string>
using namespace std;
#pragma warning(disable:4996)

class Employee {  // 최상위 클래스
	string name;

public:
	Employee(string name) : name(name){}
	
	int getPay() {
		return 0;     // 자식에 있는 것을 부모에게 형식적으로 놓아야 한다. 같은 이름 메서드가 있으면 실행을 하면 자식것이 실행이 된다. => 추상메서드
	}

	void showName() {
		cout << "이름 : " << name << endl;
	}

	void show() {
		showName();                // 부모에 있는 show를 호출
		cout << "급여 : " << getPay() << endl << endl;
	}
};


/*
	클래스 이름 : Permanent
	클래스 유형 : Entity 클래스
*/

class Permanent : public Employee{
	int salary;

public:
	Permanent(string name, int pay)
		: Employee(name), salary(pay){}   //Employee(name) 부모생성자 호출 string name으로 초기화.

	int getPay() {
		return salary;
	}

	void show() {
		showName();                // 부모에 있는 show를 호출
		cout << "급여 : " << getPay() << endl << endl;
	}
};

class Sales {
	string name;
	int salary;
	int salesResult;    // 판매 실적
	int bonus;          // 실적 수당
};

class Temporary {
	string name;
	int times;          // 근무 시간
	int pay;            // 시간당 급여
};



/*
	클래스 이름 : EmployeeManager
	클래스 유형 : Handler 클래스
*/


class EmployeeManager {
	// 객체 동적 배열 
	Employee* empList[100];      // Employee가 최사위 클래스 Employee 안에  Permanet를 넣는다.
	int empNum;

public:
	EmployeeManager(): empNum(0){}

	

	// 직원등록을 수행하는 메서드
	void addEmployee(Employee*p){ // emplist, empNum에 집어 넣으려고 주소를 가지고 온다.
		empList[empNum++] = p;
	} 

	// 직원급여의 총합을 출력하는 메서드
	void showTotalSalary() {
		int total = 0;
		for (int i = 0; i < empNum; i++) {
			total += empList[i]->getPay();            // Employee에 자식의 메서드를 넣음.			    
		}
		cout << "급여 총합 : " << total << endl;
	}

	// 모든 직원의 정보를 출력하는 메서드
	void showAllEmployee() {
		for (int i = 0; i < empNum; i++) {
			empList[i]->show();
		}
	}

};

// 하나의 controller에 모든 클래스를 control 해야 한다.

int main() {
	           
	EmployeeManager manager;

	//직원등록
	manager.addEmployee(new Permanent("aaa", 1000));
	manager.addEmployee(new Permanent("bbb", 1500));
	manager.addEmployee(new Permanent("ccc", 2000));

	// 급여총합
	manager.showTotalSalary();

	// 직원정보
	manager.showAllEmployee();

	return 0;
}


// 추상메서드 abstract 찾아보기.