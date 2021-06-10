/*
	words.txt ������ �ٴ����� �о� ������ ��
	����ڰ� �Է��� �ܾ �����ϰ� �ִ� ���ڿ��� ����ϴ� ���α׷�
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;   // �ٴ����� ó���ϴ� ����

	while (getline(fin, line)) {
		v.push_back(line);
	}
}

void search(vector<string>& v, string word) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);   // find �ش翡 �ִ� ��ġ��
		if (index != -1)  // ã�Ҵٸ�
			cout << v[i] << endl;
	}
}

int main() {
	vector<string> wordVector;
	
	ifstream fin("D:/C++_programming/source/words.txt");
	if (!fin) {
		cout << "words.txt ������ ���� �����ϴ�.\n";
		return 0;
	}
	fileRead(wordVector, fin);   // ���� ��ü�� wordVector�� ����
	fin.close();

	cout << "words.txt ������ �о����ϴ�." << endl;
	while (true) {
		cout << "�˻��� �ܾ �Է��� �ּ���" << endl;
		cout << "���α׷��� ������ ��� exit�� �Է��ϼ���." << endl;
		cout << "�˻��� �ܾ� = ";
		string word;
		getline(cin, word);
		if (word == "exit") break;
		
		search(wordVector, word);
	}
	cout << "���α׷��� �����մϴ�.";

	return 0;
}