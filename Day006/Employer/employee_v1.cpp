/*
	상속과 다형성 그리고 추상메서드
	회사에서 직원들의 급여를 관리할 목적으로 프로그램 구현
	정규직(Permanent)으로 과리 - 이름과 급여
	새로운 직원등록, 매달 지급되는 직원급여 총합, 직원정보
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
		cout << "이름 : " << name << endl;
		cout << "급여 : " << getPay() << endl << endl;
	}
};

// 객체 동적 배열
Permanent* empList[100];    // 100명 직원 관리
int empNum = 0;

// 새로운 직원등록 위한 메서드
void addEmployee(Permanent*emp) { // empList가 포인터라서  받는 것도 포인터 여야 한다.
	//string name;
	//int pay;
	//cout << "직원 이름 = ";
	//cin >> name;
	//cout << "급여 = ";
	//cin >> pay;

	//empList[empNum++] = new Permanent(name, pay);  // 직접 입력 받아서 사용
	empList[empNum++] = emp;
}

// 지급되는 직원급여의 총합을 위한 메서드
void showTotalSalary() {
	int tot = 0;

	for (int i = 0; i < empNum; i++) {
		tot += empList[i]->getPay();
	}

	cout << "급여의 총합 : " << tot << endl;
}

// 전체 등록된 직원의 정보를 출력하는 메서드
void showAllSalary() {
	for (int i = 0; i < empNum; i++) {
		empList[i]->disp();
	}
}

int main() {
	/*int inwon;

	cout << "등록할 직원 수 = ";                         // 키보드로 직접 입력받아서 사용
	cin >> inwon;

	for (int i = 0; i < inwon; i++) {
		cout << i + 1 << "번째 직원등록" << endl;
		addEmployee();

	}*/
	// 직원등록
	addEmployee(new Permanent("aaa", 1000));
	addEmployee(new Permanent("bbb", 1000));
	addEmployee(new Permanent("ccc", 1000));
	//addEmployee();


	// 급여총합
	showTotalSalary();

	// 직원정보
	showAllSalary();

	return 0;
}