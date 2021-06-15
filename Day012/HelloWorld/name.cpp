#include<iostream>
using namespace std;

int main() {

	cout << "Hello, World" << endl;

	//cout << "Hello, World";
	//cout.operator<<("Hello, World");  //(멤버 함수 형태) 
	operator<<(cout, "Hello, World");   //(전역 함수 형태)   2개중 1나로 바뀜
                  
	//cout << endl;
	cout.operator<<(endl);

	operator<<(cout, "Hello, World").operator<<(endl);





	return 0;
}