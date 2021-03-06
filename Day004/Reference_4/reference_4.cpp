/*
	- Call By Value     : 매개변수로 값을 받아서 호출
	- Call By Reference : 매개변수로 주소를 받아서 호출, 참조 - 같은 공간을 사용하는 또다른 이름 사용
*/

# include<iostream>
using namespace std;

void swap(int& ref1, int& ref2) {
	/*
	int & ref1 = num1;  -> 이름만 다를뿐 같은 기억공간을 사용.
	int & ref2 = num2;
	*/
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

int main() {
	int num1 = 10;
	int num2 = 20;


	swap(num1, num2);

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}
