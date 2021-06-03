# include<iostream>
using namespace std;

int main() {   
	int num = 12;           // 예) 100번지
	int* ptr = &num;        // 포인터 - 주소를 담는다. ptr = 100번지
	int** dptr = &ptr;      // 이중포인터 = 주소에 주소를 담는다.

	int& ref = num;         // 참조변수 -> NickName( 같은 공간 다른 이름 ) - num과 ref 같은 공간 다른 이름
	int* (&pref) = ptr;     // 포인터변수를 참조변수로 선언                - pref과 ptr 같은 공간 다른 이름
	int** (&dpref) = dptr;  // 이중포인터 참조변수 선언                    - dpref과 dptr 같은 공간 다른 이름

	cout << "ref = " << ref << endl;
	cout << "pref = " << *pref << endl;
	cout << "**dpref = " << **dpref << endl;

	return 0;
}

