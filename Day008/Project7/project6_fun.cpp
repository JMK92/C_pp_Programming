

#include<iostream>
using namespace std;

int bigger(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}


int main() {
	
	// 3 개의 정수를 입력받아 큰수를 찾아 출력하는 프로그램
	int num1, num2, num3, max;

	cout << "num1 = ";
	cin >> num1;
	cout << "num2 = ";
	cin >> num2;
	cout << "num3 = ";
	cin >> num3;
		
	max = bigger(num1, num2);
	max = bigger(num3, max);

	cout << "max = " << max << endl;

	return 0;

}