#include<iostream>
#include<string>
using namespace std;

//int x;    // 전역변수

void aaa() {
	static int x = 0;     // 지역변수 -> static 붙이면 딱 한번만 초기화 시킨다.
	x++;
	cout << x << endl;
}

int main() {

	for (int i = 0; i < 10; i++)
		aaa();

	return 0;
}