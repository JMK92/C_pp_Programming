#include<iostream>
using namespace std;

int main() {
	char name[6] = "KOREA"; // 글자 수 보다 1나 더 크게 (null string)
	//char* p = name;         // &name[0]
	char job[8] = "STUDENT";
	//char* q = name;         // &job[0]
	char address[8] = "DAEJEON";
	//char* w = name;         // &address[0]

	char people[3][8] = {"KOREA", "STUDENT", "DAEJEON"};
	char* aaa[3] = { name, job, address };//{ p, q, w };

	/*cout << name << endl;
	cout << job << endl;
	cout << address << endl;*/

	cout << people[0][0] << endl; // 첫글자 출력
	cout << people[1][0] << endl;
	cout << people[2][0] << endl;

	cout << aaa[0] << endl;

	return 0;
}