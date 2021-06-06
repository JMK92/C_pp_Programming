/* struct ���� */

#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)
/*
	strlen : ���ڿ� ����
	strcpy : ���ڿ� ����, ���ڿ��� ���Կ�����(-)�� ���Ұ�
	strcmp : ���ڿ� ��, ���(1, 0:��ġ, -1) -> ( 1, -1 : ����ġ ) 
	         strcmp(���ڿ�1, ���ڿ�2)
*/
using namespace std;
const int NAME_LEN = 20;//static, final ����, const -> C++ style
// #define NAME_LEN = 20;

// ���� �Լ�
void showMenu();       // �޴����
void makeAccount();    // ���°���
void depositMoney();   // �Ա�ó��
void withdrawMoney();  // ���ó��
void showAllAccount(); // ��ü�� �ܾ���ȸ

// ������
enum{MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

// ����ü - ���� ���õ� �ڷ����� �ϳ��� ��� �����ϴ� �ڷᱸ��
struct Account {
	int id;              // ���¹�ȣ
	int balance;         // �����ܰ� 
	char name[NAME_LEN];  //���̸�
};

// �������� - ��� �Լ��� �����ؼ� ��밡���� ����
Account acclist[100];      // Account ����ü�� �迭
int accIndex = 0;         // Account �迭�� �ε���

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
		case EXIT:                  // �۾�����
			cout << "���α׷��� �����մϴ�.\n";
			return 0;	
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
		}
	}

	return 0;
}




// �Լ� ���� �����ϴ� ����

void showMenu() {       // �޴����
	cout << "==== Bank Menu ====\n";
	cout << "1. ���°���\n";
	cout << "2. �Ա�ó��\n";
	cout << "3. ���ó��\n";
	cout << "4. �ܾ���ȸ\n";
	cout << "5. ���α׷� ����\n";
	cout << "===================\n";
}
void makeAccount() {  // ���°���
	/* ���¹�ȣ, ���̸�, ���ݱݾ� */
	int num;                     // ���¹�ȣ
	int money;                   // ���ݱݾ�
	char cusName[NAME_LEN];       // ���̸�

	cout << "== ���� ���� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;
	cout << "���̸� = ";
	cin >> cusName;
	cout << "���ݱݾ� = ";
	cin >> money;

	acclist[accIndex].id = num;
	acclist[accIndex].balance = money;
	// acclist[0].name = cusName       -> cstring������ �̷��� ���X
	strcpy(acclist[accIndex].name, cusName);
	accIndex++;  // ���� �迭�� ��ġ�� �̵��ϱ� ���ؼ�
}

void depositMoney() {  // �Ա�ó��
	/* ���¹�ȣ�� �Է¹޾� �ش� ���¿� �ݾ��� �����ϴ� �۾� */
	int num;
	int money;

	cout << "== �Ա�ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accIndex; i++) {  // ��
		if (acclist[i].id == num) {      // ���¹�ȣ�� �����Ѵٸ�
			cout << "�Աݱݾ� = ";
			cin >> money;

			// �ش� ���¿� �����ϴ� �۾�
			acclist[i].balance += money;

			cout << "�Ա�ó���� �Ϸ� �Ǿ����ϴ�. \n";
			return; // ���� ���� ������ ������� �������� ���� ����.
		}
		/*else {
			cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.";  / for�� ���� ��� ��� -> ��ȿ����.
		}*/
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";         // for���� ������ ���� ���� ������ 1�� ��´�. , �׷��� ��ġ �ϴ��� ������.
}

void withdrawMoney() { // ���ó��
	/* ���¹�ȣ�� �Է¹ް� �ش���¿� �ݾ��� ����Ѵ�. 
	   ��, �ش���¿� �ܾ��� ��ݱݾ׺��� Ŭ ���
	*/
	int num;
	int money;

	cout << "== ���ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accIndex; i++) {  // ��
		if (acclist[i].id == num) {
			cout << "��ݱݾ� = ";
			cin >> money;

			if (acclist[i].balance < money) {
				cout << "�ܾ��� �����մϴ�.\n";
				return; 
			}
			else {
				acclist[i].balance -= money;
				cout << "���ó���� �Ϸ�Ǿ����ϴ�.\n";
				return;
			}
		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n"; 
}
void showAllAccount() { // ��ü�� �ܾ���ȸ
	cout << "== ��ü�� �ܾ� ��ȸ ==\n";
	for (int i = 0; i < accIndex; i++) {
		cout << acclist[i].id << " : " << acclist[i].name;
		cout << " : " << acclist[i].balance << endl;
	}
}