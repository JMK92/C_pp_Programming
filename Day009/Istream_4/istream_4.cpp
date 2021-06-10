
#include<iostream>
using namespace std;

/*
	줄 단위로 입력하여 출력하는 프로그램
	단, exit를 입력하면 반복을 끝낸다.
	getline()
*/
int main() {
	char line[30];

	cout << "getline() 함수를 이용해서 줄단위로 입력\n";
	cout << "exit를 입력하면 프로그램이 종료됩니다." << endl << endl;

	int no = 1;   // 라인 번호
	while (true) {
		cout << no << " => ";
		cin.getline(line, 80);                    // getline(cin, a) 에서 getline과는 다른 함수이다 
		                                          // 이때 사용한 getline은 string안에 있는것
		int cnt = cin.gcount();          // hello -> 6 => enter수도 포함해서 6개

		if (strcmp(line, "exit") == 0) break;
		cout << "Echo : " << line << endl;
		cout << "글자수 : " << cnt << endl;
		no++;
	}
	
	return 0;
}