#include<iostream>
#include<string>
using namespace std;
#include"Account.h"
#include"NormalAccount.h"

NormalAccount::NormalAccount(string name, int id, int money, int rate)
	: Account(name, id, money), rate(rate){}

void NormalAccount::input(int money) {
	// �Ա�ó�� ����
	//int don = (money + (money * (rate / 100.0)));      // �ؿ� 2���� �̷��� ���ĵ� ��.
	Account::InMoney(money);                  // �Աݾ�
	Account::InMoney(money * (rate / 100.0)); // ����
}