/*
	istream get(char& ch)을 이용해서 한 라인의 문자를 읽어오는 작업
*/

#include<iostream>
using namespace std;

int main() {    // Istream 파일과 다른점은 리턴값이 char이나 int 차이
	char ch;
	while (true) {
		cin.get(ch);    // 입력받은 문자를 ch에 저장하여 리턴

		if (cin.eof()) break;  // eof를 만나면 읽기 종료
		cout.put(ch);

		if (ch == '\n') break;  // 입력하다가 enter키 만나면 반복문 종료
	}

	return 0;
}