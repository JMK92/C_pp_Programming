/*
	키보드를 통해 입력한 내용을 텍스트 파일로 저장하는 작업
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	char name[20], major[50];
	int id;

	cout << "이름 = ";
	cin >> name;
	cout << "학번 = ";
	cin >> id;
	cout << "학과 = ";
	cin >> major;

	// step 1. 파일 객체 생성
	ofstream fout("D:/C++_programming/source/student.txt");

	// step 2. 파일 열기
	//fout.open("D:/C++_programming/source/student.txt");

	// step 3. 작업
	fout << name << endl;
	fout << id << endl;
	fout << major << endl;

	// step 4. 파일 닫기
	fout.close();
	return 0;
}