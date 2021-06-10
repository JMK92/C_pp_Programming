/*
	�ؽ�Ʈ ������ ���� ������ �о���� �۾�
	- istream�� getline(char* line, int n) �Լ��� �̿��ϴ� ���
	  fin.getline(char*, int) -> char* ���ڿ����� int �� ��ŭ �����Ͷ�

	- �����Լ� getline(ifstream & fin, string& line)�� �̿��ϴ� ���
	  getline(fin, line) -> fin �о�ͼ� line�� ����.
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	const char* file = "C:/Windows/system.ini"; 
		
	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����" << endl;
		return 0;
	}

	/* �� ������ �о�� �ٴ����� ����ϴ� �۾� */
	char buf[81];   //�ִ� 80�� 
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}
	
	fin.close();
	
	return 0;
}
