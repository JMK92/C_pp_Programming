/*
	함수(Function)
	- 여러개의 명령어를 하나의 이름으로 담아서 관리하는 객체
	- 특별한 목적을 수행하기 위해 독립적으로 설계된 코드의 집합
	- 캡슐화.
	- 이유 : 반복적인 프로그래밍을 효율적으로 수행, 가독성 높이기 위해.
	- 선언
	   반환 자료형 함수명(매개변수){
	      // 함수의 내용정의부
	   }
	- 호출을 통해서 동작한다.
	- 호출방법 : 
	- Call By Name : 이름을 의한 호출 
	- Call By Value : (값에 의한 호출) 함수에 매개변수를 담아서 호출
	- Call By Reference : (주소에 의한 호출) 함수에 매개변수의 주소를 담아서 호출
*/
#include<iostream>
using namespace std;

// 함수 선언부
void aaa();
//void bbb(int, int);
void bbb(int*, int*); //call by reference 일때


int main() { // main함수는 다름 함수를 담을 수 있지만 다른 함수는 main을 담을 수 없다.
	// 선언문
	int x, y;

	// 입력문
	x = 10, y = 20;
	                                                
	// 처리문
	//aaa();     // Call By Name                  
	//bbb(x, y); // Call By Value 값을 가지고 호출
	bbb(&x, &y); // Call By Reference

	// 출력문
	cout << "x = " << x << ", " << "y = " << y << endl;


	return 0; // 시스템 종료
}

//// C언어는 위에서 아래로 실행하는 언어.
//// -> 함수가 main 뒤에서 작성 하면 함수를 앞에서 선언 해주어야 한다.

void aaa() {
	cout << "aaa 함수 호출" << endl;
	//return; // 되돌려 줄 값(매개변수)이 없으면 생각 가능
}

void bbb(int* x, int* y) { // int x = 10, int y = 20
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;   // 지역변수 -> 여기서만 바뀜

	cout << "x = " << *x << "y = " << *y << endl;
	//return
}