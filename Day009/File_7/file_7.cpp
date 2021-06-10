/*
	words.txt 파일을 줄단위로 읽어 저장한 후
	사용자가 입력한 단어를 포함하고 있는 문자열을 출력하는 프로그램
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;   // 줄단위로 처리하는 변수

	while (getline(fin, line)) {
		v.push_back(line);
	}
}

void search(vector<string>& v, string word) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);   // find 해당에 있는 위치값
		if (index != -1)  // 찾았다면
			cout << v[i] << endl;
	}
}

int main() {
	vector<string> wordVector;
	
	ifstream fin("D:/C++_programming/source/words.txt");
	if (!fin) {
		cout << "words.txt 파일을 열수 없습니다.\n";
		return 0;
	}
	fileRead(wordVector, fin);   // 파일 객체를 wordVector에 넣음
	fin.close();

	cout << "words.txt 파일을 읽었습니다." << endl;
	while (true) {
		cout << "검색할 단어를 입력해 주세여" << endl;
		cout << "프로그램을 종료할 경우 exit를 입력하세요." << endl;
		cout << "검색할 단어 = ";
		string word;
		getline(cin, word);
		if (word == "exit") break;
		
		search(wordVector, word);
	}
	cout << "프로그램을 종료합니다.";

	return 0;
}