/*
	���� ���� �� ���Ӹ����
	�� ����� �ϴ� ����, ����, �� ������ ����� ������.
	�־��� ����� ���Ŀ� �°� �����ϼ���.

	< �Է� �� ��� ���� >
	���ӿ� ������ ����̸� : ���� ���
	������ �����մϴ�.
	���� = ����
	��� = ����
	����� �̰���ϴ�.
	�ٽ�(Y/N) = y

	���ӿ� ������ ����̸� : ���� ö��
	���� = ����
	ö�� = ����
	�����ϴ�.
	�ٽ�(Y/N) = N
	���α׷��� �����մϴ�.
*/

#include<iostream>
#include<string>
using namespace std;

//int main() {
//	string p1, p2;
//	string r, s, p;
//	string answer;
//	string N;
//	
//	
//	
//
//	while (true) {
//		cout << "���ӿ� ������ ����̸� : ";
//		cin >> p1 >> p2;
//		cout << "������ �����մϴ�.";
//		if p1 
//		cout << p1 << " = " << ;
//		cout << p2 << " = " << ;
//		cout << "�ٽ�(Y/N) : ";
//		cin >> answer;
//		if(answer == "N") break;
//	}
//	
//
//
//
//
//	return 0;
//}
int main() {
	string a, b;
	string c, d;
	char check;

	while (true) {
		cout << "���ӿ� ������ ����̸� : ";
		cin >> a >> b;

		cout << a << " = " ;
		cin >> c;
		cout << b << " = " ;
		cin >> d;

		if (c == "����" && d == "��" || c == "����" && d == "����" || c == "��" && d == "����")
			cout << a << "�� �̰���ϴ�." << endl;
		else if (d == "����" && c == "��" || d == "����" && c == "����" || d == "��" && c == "����")
			cout << b << "�� �̰���ϴ�." << endl;
		else
			cout << a << "�� " << b << "�� �����ϴ�." << endl;
		
		cout << "�ٽ�(Y/N) : ";
		cin >> check;
		if (check == 'N' || check == 'n') break;
	}


	return 0;
}
