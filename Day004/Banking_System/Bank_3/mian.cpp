#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)
using namespace std;

#include"bank.h"

// ���� �Լ�
void showMenu();       // �޴����
void makeAccount();    // ���°���
void depositMoney();   // �Ա�ó��
void withdrawMoney();  // ���ó��
void showAllAccount(); // ��ü�� �ܾ���ȸ


// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };


// ��ü ������ �迭 : �����Ҵ� -> ����� 2���� 3���� 4���� �� �ٸ���. 
Account* acclist[100];         // ������ ��ȿ����.
int accNum = 0;

int main() {
	int menu;

	while (true) {
		showMenu();
		cout << "�޴� = ";
		cin >> menu;

		switch (menu) {
		case MAKE:                   // ���°���
			makeAccount(); break;
		case DEPOSIT:                // �Ա�ó��
			depositMoney(); break;
		case WITHDRAW:               // ����ó��
			withdrawMoney(); break;
		case INQUIRE:                // �ܾ���ȸ
			showAllAccount(); break;
		case EXIT:                   // �۾�����
			// �����Ҵ� ��ȯ
			for (int i = 0; i < accNum; i++) {
				delete acclist[i];
			}
			cout << "���α׷��� �����մϴ�.\n";
			return 0;
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
		}
	}

	return 0;
}