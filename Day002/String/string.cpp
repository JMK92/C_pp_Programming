/*
	C++ 문자열
	- C-스트링 : C언어에서 문자열을 표현하는 방식
	  배열(array) : 동질의 자료형을 하나의 이름으로 묶어서 관리하는 자료
	  'K', 'O', 'R', 'E', 'A'
	- string 클래스 : C++에서 문자열을 처리하는 방식, 권장

*/

#include<iostream>
#include<string> //-> C++ 스타일, #include<string.h> -> C언어 스타일, C++에서 C언어 스타일 string 쓸려면 #include<cstring>
/* strlen, strcmp(두개 문자 비교), strcpy(두개문자 copy), ..... */
using namespace std;

int main() {
	//char a, b, c, d, e;
	//// 배열
	//char arr[5] = {'K', 'O', 'R', 'E', 'A'}; // arr[배열크기] = {초기화}
	//char arr[] = "KOREA"; // null string '\0' => 6개 잡혀 있음 -> 마지막에 null string이 담겨 있음 ( 문자열의 끝이다 )
	//                     // string 잡을때는 하나더 해서 잡음 korea - 5개지만 string은 6개로 잡음.
	
	//char name[12]; // 공간크기 설정 12 -> 영문자 - 11, 한글 - 5글자 + null string
	string names;  // (권장)

	cout << "이름 = "; 
	// getline() -> 줄단위로 읽어온다. ( 공백을 읽고 싶을 때 사용 )
	//cin >> names; // 공백을 허용하지 않는다. -> 공백을 끝난것으로 처리
	//cin.getline(name, 12, '\n'); // (변수명, byte, 종결자) -> 종결자는 생략가능 => 공백을 허용 ==> string일때는 사용X
	getline(cin, names);// (입력, 저장할 곳) -> string일때 공백을 허용
	

	cout << "당신의 이름은 " << names << "입니다.\n";

	return 0;
}