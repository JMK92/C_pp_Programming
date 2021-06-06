#pragma once
#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)

// 클래스
class Account {
	int id;              // 계좌번호
	int balance;         // 예금잔고 
	char* name;  //고객이름

public:
	// 생성자 메서드
	Account(int id, int money, char* cusName)
		:id(id), balance(money) {// id값에 내가 정한 id, cstring은 대입연산자를 사용X
		// 동적 할당.
		name = new char[strlen(cusName) + 1]; // 여유있게 한자리 더 만들어 줌.
		strcpy(name, cusName);
	}

	int getId() { return id; }
	int getBalance() { return balance; } // private라서 다른 식으로 접근
	void inBalance(int money) {         // 입금
		balance += money;
	}
	int outBalance(int money) {         // 출금
		if (balance < money)
			return 0;                 // 잔액이 부족한 경우
		else
			balance -= money;
		return money;
	}

	void showAccount() {
		cout << id << " : " << name << " : " << balance << endl; //한개의 account을 출력하는 메서드
	}

	~Account() {
		delete[] name;
	}
};
