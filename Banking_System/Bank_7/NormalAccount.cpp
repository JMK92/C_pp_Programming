#include<iostream>
#include<string>
using namespace std;
#include"Account.h"
#include"NormalAccount.h"

NormalAccount::NormalAccount(string name, int id, int money, int rate)
	: Account(name, id, money), rate(rate){}

void NormalAccount::input(int money) {
	// 입금처리 과정
	//int don = (money + (money * (rate / 100.0)));      // 밑에 2개를 이렇게 합쳐도 됨.
	Account::InMoney(money);                  // 입금액
	Account::InMoney(money * (rate / 100.0)); // 이자
}