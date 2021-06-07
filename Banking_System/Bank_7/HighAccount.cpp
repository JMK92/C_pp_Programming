#include<iostream>
#include<string>
using namespace std;
#pragma warning(disable:4996)

#include"Account.h"
#include"HighAccount.h"

HighAccount::HighAccount(string name, int id, int balance, int rate, int speical)
	:Account(name, id, balance), rate(rate), special(speical) {}

void HighAccount::input(int money) {
	Account::InMoney(money);                       // 원금
	Account::InMoney(money * (rate / 100.0));      // 이자
	Account::InMoney(money * (special / 100.0));   // 특별 이자
}