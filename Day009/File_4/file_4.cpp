/*
	get()�� �̿��ؼ� �ؽ�Ʈ ����
	C:\Windows\system.ini ������ �о� ȭ�鿡 ����ϴ� ���α׷��� �����Ͻÿ�.
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	// step 1. 

	const char* file = "C:/Windows/system.ini";
	
	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����";
		return 0;
	}
	int byte = 0;
	int ch;
	while ((ch = fin.get()) != EOF) {
		cout.put(ch);
		byte++;
	}
	
	cout << "���� ����Ʈ �� : " << byte << endl;


	// step 4. ���ϰ�ü �ݱ�
	fin.close();


	return 0;
}