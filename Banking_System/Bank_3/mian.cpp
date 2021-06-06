#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)
using namespace std;

#include"bank.h"

// 전역 함수
void showMenu();       // 메뉴출력
void makeAccount();    // 계좌개설
void depositMoney();   // 입금처리
void withdrawMoney();  // 출금처리
void showAllAccount(); // 전체고객 잔액조회


// 열거형
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };


// 객체 포인터 배열 : 동적할당 -> 사람이 2글자 3글자 4글자 다 다르다. 
Account* acclist[100];         // 기존꺼 비효율적.
int accNum = 0;

int main() {
	int menu;

	while (true) {
		showMenu();
		cout << "메뉴 = ";
		cin >> menu;

		switch (menu) {
		case MAKE:                   // 계좌개설
			makeAccount(); break;
		case DEPOSIT:                // 입금처리
			depositMoney(); break;
		case WITHDRAW:               // 츨금처리
			withdrawMoney(); break;
		case INQUIRE:                // 잔액조회
			showAllAccount(); break;
		case EXIT:                   // 작업종료
			// 동적할당 변환
			for (int i = 0; i < accNum; i++) {
				delete acclist[i];
			}
			cout << "프로그램을 종료합니다.\n";
			return 0;
		default:
			cout << "메뉴의 선택이 올바르지 않습니다.\n";
		}
	}

	return 0;
}