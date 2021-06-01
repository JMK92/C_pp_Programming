/*
  계좌관리 프로그램
  <처리조건>
  1. Account 라는 구조체를 선언하여 처리한다.
  2. 구조체 멤버는 고객이름, 계좌번호, 예금금액을 담아서 처리한다.
  3. 계좌개설, 입금처리, 출금처리, 고객계좌정보 출력을 수행하는 함수를 구현한다.
  4. 둘 이상의 고객을 관리하기 위해 구조체 배열을 사용한다.
  5. 사용자가 원하는 작업을 수행할 수 있도록 구현한다.
  6. 기타 조건은 입출력 형식에 맞게 동작되도록 구현한다.

  <입력 및 출력형식>
  == 계좌관리 프로그램 ==
  1. 계좌개설
  2. 입금처리
  3. 출금처리
  4. 전체고객 잔액조회
  5. 프로그램 종료
  ========================
  메뉴 =

  == 계좌개설 ==
  계좌번호 =
  고객이름 =
  예금금액 =
  ===============
  계좌개설이 완료되었습니다.

  == 입금처리 ==
  계좌번호 =
  입금금액 =
  ===============
  입금처리가 완료되었습니다.

  == 출금처리 ==
  계좌번호 =
  출금금액 =
  ===============
  출금처리가 완료되었습니다.

  == 전체고객 잔액조회 ==
  계좌번호  고객이름  예금잔액
  ----------------------------
  xxx       xxx        xxx

  ============================


*/
#include<iostream>
using namespace std;

// 구조체 생성
struct Account {
	int number; //  계좌번호
	int	income; //  예금금액
	char name[30];  // 고객 이름
};

Account account[3];


// 함수 선언
void make_account();
void deposit_account();
void withdraw_account();
void explain_account();

// 메인문
int main() {
	int choose;
	
	while (true) {
		cout << "== 계좌관리 프로그램 ==" << endl;
		cout << "1. 계좌개설" << endl;
		cout << "2. 입금처리" << endl;
		cout << "3. 출금처리" << endl;
		cout << "4. 전체고객 잔액조회" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << " ========================" << endl;
		cout << " 메뉴 = ";
		cin >> choose;

		if (choose == 1) {
			make_account();
		}
		else if (choose == 2) {
			deposit_account();
		}
		else if (choose == 3) {
			withdraw_account();
		}
		else if (choose == 4) {
			explain_account();
		}
		else if (choose == 5) {
			cout << "프로그램을 종료합니다.";
			break;
		}
		else {
			cout << "잘못된 선택 입니다. 다시 선택 하세여";
		}

	}

	return 0;
}

int j = 0;

// 함수 정의
void make_account() {
	
	cout << " == 계좌개설 ==" << endl;
	cout << "계좌번호 = ";
	cin >> account[j].number;
	cout << "고객이름 = ";
	cin >> account[j].name;
	cout << "예금금액 = ";
	cin >> account[j].income;
	cout << "===============" << endl;
	j++;
	
	// 한번에 3명 만들기
	/*for (int i = 0; i < 3; i++) {		
		cout << "계좌번호 = " ;
		cin >> account[i].number;
		cout << "고객이름 = " ;
		cin >> account[i].name;
		cout << "예금금액 = ";
		cin >> account[i].income;
		cout << "===============" << endl;
	}*/
	cout << "계좌개설이 완료되었습니다.";

}

void deposit_account() {
	int money;
	int res;
	
	cout << "== 입금처리 ==" << endl;
	cout << "계좌번호 =" << endl;
	cin >> res;
	for (int i = 0; i < 3; i++) {
		if (res == account[i].number) {
			cout << "입금금액 =" << endl;
			cin >> money;
			account[i].income += money;
		}
		cout << "===============" << endl;
	}
	cout << "입금처리가 완료되었습니다." << endl;
}

void withdraw_account() {
	int money;
	int res;
	
	cout << "== 출금처리 ==" << endl;
	cout << "계좌번호 =" << endl;
	cin >> res;
	for (int i = 0; i < 3; i++) {
		if (res == account[i].number) {
			cout << "출금금액 =" << endl;
			cin >> money;
			account[i].income -= money;
		}
		cout << "===============" << endl;
	}
}

void explain_account() {
		
	cout << "== 전체고객 잔액조회 ==" << endl;
	cout << "계좌번호  고객이름  예금잔액" << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < j; i++) {
		cout << account[i].number << "        " << account[i].name << "         " << account[i].income << endl;
	}
	cout << "============================" << endl;	
}