#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	// step 1. ���� ��ü ����
	ifstream fin;

	// step 2. ���� ����
	fin.open("D:/C++_programming/source/student.txt");
	if (!fin) {
		cout << "���� ���� ����\n";
		return 0;
	}
	char name[20], major[50];
	int id;

	fin >> name;
	fin >> id;
	fin >> major;

	cout << "�̸� : " << name << endl;
	cout << "�й� : " << id << endl;
	cout << "�а� : " << major << endl;

	// step 4. ���ϰ�ü �ݱ�
	fin.close();

	return 0;
}