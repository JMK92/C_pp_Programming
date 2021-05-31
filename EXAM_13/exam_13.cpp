/*
	레퍼런스(Reference) & NickName(별칭)
	- 이름을 지닌 대상에 별명을 붙여주는 행위
	- 변수 : 메모리 공간에 붙여진 이름, 기억공간(장소)
	- 메모리 공간에 이름을 하나 더 추가하는 행위
	- 형식
      int& ref = val; -> int이름을 ref로

*/

#include<iostream>
using namespace std;

int main() {
	int val = 10;
	int* pVal = &val; // 포인터변수
	int& rVal = val; // 레퍼런스 선언 , val의 또다른 이름

	cout << "Val = " << val << endl;
	cout << "rVal = " << rVal << endl;
	cout << "Val 주소 = " << &val << endl;
	cout << "Val 주소 = " << pVal << endl;

	return 0;
}