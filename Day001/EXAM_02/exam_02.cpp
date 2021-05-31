# include<iostream>
# define TEXT "Welcome to C++ Programming!!"
//  이름공간 std를 사용하겠다는 의미
using namespace std; // std:: 이것을 계속 쓰는 대신 이렇게 사용하여 코딩 간결화

int main() {
	/*
		namespace : 이름공간
		std 객체(instance 객체)
		:: => scope 연산자(소유 연산자), ~꺼
		std:: (std에서 가지고 있는 거 , std꺼) => input : cin(=console input), cout(= console output)
	*/


	cout << TEXT;

	return 0;
}