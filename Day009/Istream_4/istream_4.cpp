
#include<iostream>
using namespace std;

/*
	�� ������ �Է��Ͽ� ����ϴ� ���α׷�
	��, exit�� �Է��ϸ� �ݺ��� ������.
	getline()
*/
int main() {
	char line[30];

	cout << "getline() �Լ��� �̿��ؼ� �ٴ����� �Է�\n";
	cout << "exit�� �Է��ϸ� ���α׷��� ����˴ϴ�." << endl << endl;

	int no = 1;   // ���� ��ȣ
	while (true) {
		cout << no << " => ";
		cin.getline(line, 80);                    // getline(cin, a) ���� getline���� �ٸ� �Լ��̴� 
		                                          // �̶� ����� getline�� string�ȿ� �ִ°�
		int cnt = cin.gcount();          // hello -> 6 => enter���� �����ؼ� 6��

		if (strcmp(line, "exit") == 0) break;
		cout << "Echo : " << line << endl;
		cout << "���ڼ� : " << cnt << endl;
		no++;
	}
	
	return 0;
}