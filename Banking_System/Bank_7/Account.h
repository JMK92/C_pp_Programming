#pragma once

#include<iostream>
#include<string>
//using namespace std;

class Account {
	string name;
	int id;
	int balance;

public:
	Account(string name, int id, int money);

	void setName(string name);
	string getname() const;
	int getid() const;
	//void setBalance(int money);
	void InMoney(int money) ;
	int OutMoney(int money);
	int getBalance() const;
	void showAccount() const;

	// Account => Normal, High
	virtual void input(int money);
		
};
