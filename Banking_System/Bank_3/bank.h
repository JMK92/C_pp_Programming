#pragma once
#include<iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)

// Ŭ����
class Account {
	int id;              // ���¹�ȣ
	int balance;         // �����ܰ� 
	char* name;  //���̸�

public:
	// ������ �޼���
	Account(int id, int money, char* cusName)
		:id(id), balance(money) {// id���� ���� ���� id, cstring�� ���Կ����ڸ� ���X
		// ���� �Ҵ�.
		name = new char[strlen(cusName) + 1]; // �����ְ� ���ڸ� �� ����� ��.
		strcpy(name, cusName);
	}

	int getId() { return id; }
	int getBalance() { return balance; } // private�� �ٸ� ������ ����
	void inBalance(int money) {         // �Ա�
		balance += money;
	}
	int outBalance(int money) {         // ���
		if (balance < money)
			return 0;                 // �ܾ��� ������ ���
		else
			balance -= money;
		return money;
	}

	void showAccount() {
		cout << id << " : " << name << " : " << balance << endl; //�Ѱ��� account�� ����ϴ� �޼���
	}

	~Account() {
		delete[] name;
	}
};
