/*
	get()을 이용해서 텍스트 파일
	C:\Windows\system.ini 파일을 읽어 화면에 출력하는 프로그램을 구현하시오.
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	// step 1. 

	const char* file = "C:/Windows/system.ini";
	
	ifstream fin(file);
	if (!fin) {
		cout << file << "열기 실패";
		return 0;
	}
	int byte = 0;
	int ch;
	while ((ch = fin.get()) != EOF) {
		cout.put(ch);
		byte++;
	}
	
	cout << "읽은 바이트 수 : " << byte << endl;


	// step 4. 파일객체 닫기
	fin.close();


	return 0;
}