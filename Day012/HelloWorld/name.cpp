#include<iostream>
using namespace std;

int main() {

	cout << "Hello, World" << endl;

	//cout << "Hello, World";
	//cout.operator<<("Hello, World");  //(��� �Լ� ����) 
	operator<<(cout, "Hello, World");   //(���� �Լ� ����)   2���� 1���� �ٲ�
                  
	//cout << endl;
	cout.operator<<(endl);

	operator<<(cout, "Hello, World").operator<<(endl);





	return 0;
}