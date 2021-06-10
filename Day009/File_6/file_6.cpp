/*
	텍스트 파일을 라인 단위로 읽어오는 작업
	- istream의 getline(char* line, int n) 함수를 이용하는 방법
	  fin.getline(char*, int) -> char* 문자열에서 int 수 만큼 가져와라

	- 전역함수 getline(ifstream & fin, string& line)를 이용하는 방법
	  getline(fin, line) -> fin 읽어와서 line에 저장.
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	const char* file = "C:/Windows/system.ini"; 
		
	ifstream fin(file);
	if (!fin) {
		cout << file << "열기 실패" << endl;
		return 0;
	}

	/* 줄 단위로 읽어와 줄단위로 출력하는 작업 */
	char buf[81];   //최대 80자 
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}
	
	fin.close();
	
	return 0;
}
