/*
	Ű���带 ���� �Է��� ������ �ؽ�Ʈ ���Ϸ� �����ϴ� �۾�
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	char name[20], major[50];
	int id;

	cout << "�̸� = ";
	cin >> name;
	cout << "�й� = ";
	cin >> id;
	cout << "�а� = ";
	cin >> major;

	// step 1. ���� ��ü ����
	ofstream fout("D:/C++_programming/source/student.txt");

	// step 2. ���� ����
	//fout.open("D:/C++_programming/source/student.txt");

	// step 3. �۾�
	fout << name << endl;
	fout << id << endl;
	fout << major << endl;

	// step 4. ���� �ݱ�
	fout.close();
	return 0;
}