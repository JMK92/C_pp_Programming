#include<iostream>
using namespace std;

int main() {
	cout << "i" << "\t" << "n" << "\t" << "ref" << endl;
	int i = 1;
	int n = 2;
	int& ref = n; // 참조변수 선언
	// i = 1, n= 2, ref = 2
	n = 4; // n = 4, ref = 4
	ref++; // ref = 5, n =5
	cout << "i" << "\t" << n << "\t" << ref << endl;
	//       1             5             5


	ref = i; // ref = 1, n = 1
	ref++;   // ref = 2, n = 2
	cout << "i" << "\t" << n << "\t" << ref << endl;
	//       1              2             2


	int* p = &ref;  // ref주소는 n의 주소, ref주소를 p의 주소 공유 즉 n도 같이 공유
	*p = 20;        // ref = 20, n =20
	cout << "i" << "\t" << n << "\t" << ref << endl;
	//       1              20           20

	return 0;
}