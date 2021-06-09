/*
	구조체(structure type)
	- 사용자정의 자료형
	- 서로 다른 자료를 묶어서 하나의 단위로 처리하는 자료구조
	- 구성 : 멤버변수 or 멤버필드
	- C++ 구조제 구성 : 멤버필드와 멤버메서드로 구성된다.
	- 키워드 struct
*/

#include<iostream>
#include<cstring>
/*
	C언어에서 string.h 파일과 동일하다. C++로 넘어오면서 이름이 변경
	strlen : 문자열길이
	strcpy : 문자열복사, 대입연산자(=)을 사용하지 못하므로
	strcmp : 문자열비교, 0(일치), -1, 1
*/
#pragma warning(disable:4996)
using namespace std;

// 구조체 정의
struct Employee {
	char name[20];  // 20byte, 영문자 - 19, 한글 - 9
	int pay;

	void disp(){
		cout << "직원의 이름 = " << name << endl;
		cout << "직원의 급여 = " << pay << endl;
	}
};

int main() {
	// 구조체변수 : 객체변수
	Employee emp[3];

	//Employee emp1;
	emp[1] = { "장보고", 200000 };  // 초기값을 이용
	//Employee emp3;

	

	// 구조체변수를 이용해서 멤버접근 : direct연산자(.)
	emp[0].pay = 100000;
	//emp.name = "홍길동"; // 대입연산자를 사용 X -> cstring에 있는 strcpy사용
	strcpy(emp[0].name, "홍길동");

	cout << "직원이름 = ";
	cin >> emp[2].name;
	cout << "직원급여 = " << endl;
	cin >> emp[2].pay;

	/*cout << "직원이름 : " << emp[0].name << endl;
	cout << "직원급여 : " << emp[0].pay << endl;

	cout << "직원이름 : " << emp[1].name << endl;
	cout << "직원급여 : " << emp[1].pay << endl;

	cout << "직원이름 : " << emp[2].name << endl;
	cout << "직원급여 : " << emp[2].pay << endl;*/

	for (int i = 0; i < 3; i++) {
		/*cout << "직원의 이름 = " << emp[i].name << endl;
		cout << "직원의 급여 = " << emp[i].pay << endl;*/
		emp[i].disp();
	}

	return 0;
}
