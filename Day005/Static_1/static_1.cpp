/*
	지정예약어 static
	- 전역변수의 static : 해당 파일에서만 참조를 허용한다는 의미
	- 지역변수의 static : 한번만 초기화되고, 일반적인 지역변수와 달리 함수를 벗어나도 소멸되지 않는다.
*/

#include<iostream>
using namespace std;
// static으로 선언된 변수는 전역변수와 마찬가지로 초기화되지 않으면 0으로 초기화 된다.


void counter() {
	static int cnt;  // 0
	// int cnt = 0;  
	cnt++;
	cout << "Current cnt = " << cnt << endl;
}
 
//int x;  // 전역변수  -> 기본적으로 0으로 초기화 된다.

int main() {
	//int y;  // 지역변수  -> 반드시 초기화를 해야 한다.

	/*cout << "x = " << x << endl;
	cout << "y = " << y << endl;*/

	
	for (int i = 0; i < 10; i++) // int cnt = 0으로 두면 계속 초기화가 되어서 1로 출력이 된다.
		counter();              // static cnt는 초기화되지 않고 누적이되어 1 부터 10까지 출력.


	
	return 0;
}