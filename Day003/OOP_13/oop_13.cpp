// 참조리턴 함수
#include<iostream>
using namespace std;

//void swap(int &a, int &b) { // int &a = a-> nick name a가 더생김.(같은 공간)
//	int t = a;
//	a = b;
//	b = t;
//	cout << a << " : " << b << endl;
//	// 값이 소멸
//}


// int function -> 함수 이름 앞에는 리턴을 해줄 것을 놓는다.
int& FuncOne(int& a) { // int &a = num1;
	a++;             // a = 6
	return a;        // a 값을 리턴한것이 아니라 리턴값이 참조값이다.
}

int FuncTwo(int& a) {  // 리턴을 변수값
	a++;
	return a;
}

int main() {
	int num1 = 5;
	int num2 = FuncOne(num1); // int& num2 = num1;
	cout << num1 << " : " << num2 << endl; // 같은 공간이 됨.
	              
	
	
	/*int a = 10, b = 20;
	cout << "main = " << a << " : " << b << endl;

	swap(a, b);
	cout << "swap = " << a << " : " << b << endl;*/

	return 0;
}
