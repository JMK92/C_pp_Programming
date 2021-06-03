# include<iostream>
using namespace std;

int& refFuncOne(int& ref) {
	/* int& ref = num1 -> 같은 기억공간 */ 
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int& num2 = refFuncOne(num1);  // num1을 참조하는 변수가 ref, num2 2개가 된다.

	num1++;
	num2++;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}