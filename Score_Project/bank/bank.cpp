/*
  ���°��� ���α׷�
  <ó������>
  1. Account ��� ����ü�� �����Ͽ� ó���Ѵ�.
  2. ����ü ����� ���̸�, ���¹�ȣ, ���ݱݾ��� ��Ƽ� ó���Ѵ�.
  3. ���°���, �Ա�ó��, ���ó��, ���������� ����� �����ϴ� �Լ��� �����Ѵ�.
  4. �� �̻��� ���� �����ϱ� ���� ����ü �迭�� ����Ѵ�.
  5. ����ڰ� ���ϴ� �۾��� ������ �� �ֵ��� �����Ѵ�.
  6. ��Ÿ ������ ����� ���Ŀ� �°� ���۵ǵ��� �����Ѵ�.

  <�Է� �� �������>
  == ���°��� ���α׷� ==
  1. ���°���
  2. �Ա�ó��
  3. ���ó��
  4. ��ü�� �ܾ���ȸ
  5. ���α׷� ����
  ========================
  �޴� =

  == ���°��� ==
  ���¹�ȣ =
  ���̸� =
  ���ݱݾ� =
  ===============
  ���°����� �Ϸ�Ǿ����ϴ�.

  == �Ա�ó�� ==
  ���¹�ȣ =
  �Աݱݾ� =
  ===============
  �Ա�ó���� �Ϸ�Ǿ����ϴ�.

  == ���ó�� ==
  ���¹�ȣ =
  ��ݱݾ� =
  ===============
  ���ó���� �Ϸ�Ǿ����ϴ�.

  == ��ü�� �ܾ���ȸ ==
  ���¹�ȣ  ���̸�  �����ܾ�
  ----------------------------
  xxx       xxx        xxx

  ============================


*/
#include<iostream>
using namespace std;

// ����ü ����
struct Account {
	int number; //  ���¹�ȣ
	int	income; //  ���ݱݾ�
	char name[30];  // �� �̸�
};

Account account[3];


// �Լ� ����
void make_account();
void deposit_account();
void withdraw_account();
void explain_account();

// ���ι�
int main() {
	int choose;
	
	while (true) {
		cout << "== ���°��� ���α׷� ==" << endl;
		cout << "1. ���°���" << endl;
		cout << "2. �Ա�ó��" << endl;
		cout << "3. ���ó��" << endl;
		cout << "4. ��ü�� �ܾ���ȸ" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << " ========================" << endl;
		cout << " �޴� = ";
		cin >> choose;

		if (choose == 1) {
			make_account();
		}
		else if (choose == 2) {
			deposit_account();
		}
		else if (choose == 3) {
			withdraw_account();
		}
		else if (choose == 4) {
			explain_account();
		}
		else if (choose == 5) {
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		else {
			cout << "�߸��� ���� �Դϴ�. �ٽ� ���� �ϼ���";
		}

	}

	return 0;
}

int j = 0;

// �Լ� ����
void make_account() {
	
	cout << " == ���°��� ==" << endl;
	cout << "���¹�ȣ = ";
	cin >> account[j].number;
	cout << "���̸� = ";
	cin >> account[j].name;
	cout << "���ݱݾ� = ";
	cin >> account[j].income;
	cout << "===============" << endl;
	j++;
	
	// �ѹ��� 3�� �����
	/*for (int i = 0; i < 3; i++) {		
		cout << "���¹�ȣ = " ;
		cin >> account[i].number;
		cout << "���̸� = " ;
		cin >> account[i].name;
		cout << "���ݱݾ� = ";
		cin >> account[i].income;
		cout << "===============" << endl;
	}*/
	cout << "���°����� �Ϸ�Ǿ����ϴ�.";

}

void deposit_account() {
	int money;
	int res;
	
	cout << "== �Ա�ó�� ==" << endl;
	cout << "���¹�ȣ =" << endl;
	cin >> res;
	for (int i = 0; i < 3; i++) {
		if (res == account[i].number) {
			cout << "�Աݱݾ� =" << endl;
			cin >> money;
			account[i].income += money;
		}
		cout << "===============" << endl;
	}
	cout << "�Ա�ó���� �Ϸ�Ǿ����ϴ�." << endl;
}

void withdraw_account() {
	int money;
	int res;
	
	cout << "== ���ó�� ==" << endl;
	cout << "���¹�ȣ =" << endl;
	cin >> res;
	for (int i = 0; i < 3; i++) {
		if (res == account[i].number) {
			cout << "��ݱݾ� =" << endl;
			cin >> money;
			account[i].income -= money;
		}
		cout << "===============" << endl;
	}
}

void explain_account() {
		
	cout << "== ��ü�� �ܾ���ȸ ==" << endl;
	cout << "���¹�ȣ  ���̸�  �����ܾ�" << endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < j; i++) {
		cout << account[i].number << "        " << account[i].name << "         " << account[i].income << endl;
	}
	cout << "============================" << endl;	
}