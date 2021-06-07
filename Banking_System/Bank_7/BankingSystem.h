#pragma once

#include"Account.h"

class BankingSystem {
	// ��ü ������ �迭 :  
	Account* accList[100];
	int accNum;

public:
	BankingSystem();

	void showMenu() const;       // �޴����
	void makeAccount();    // ���°���
	void makeNormalAccount();
	void makeHighAccount();
	void depositMoney();   // �Ա�ó��
	void withdrawMoney();  // ���ó��
	void showAllAccount() const; // ��ü�� �ܾ���ȸ

	

	~BankingSystem();

};
