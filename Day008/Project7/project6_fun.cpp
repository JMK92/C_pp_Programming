

#include<iostream>
using namespace std;

int bigger(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}


int main() {
	
	// 3 ���� ������ �Է¹޾� ū���� ã�� ����ϴ� ���α׷�
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