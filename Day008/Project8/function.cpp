/*
	�ټ����� ������ �Է¹޾� �迭�� ������ �� �� �հ� �����
	����Ͽ� ����ϴ� ���α׷��� �����Ͻÿ�.
*/

#include<iostream>
using namespace std;
/*
	step1. �迭�� �޾Ƽ� ó���ϴ� �پ���
	step2. �ּҸ� �����ϴ� ����-������ ����, �迭ó�� ��밡��
*/
int adder(int* data) { // data = &data[0] //int a, int b, int c, int d, int e) {
	int sum = 0;
	//sum = a + b + c + d + e;
	for (int i = 0; i < 5; i++) {
		//sum += *(data+i); //data[i];	
		sum += *data++;
	}
	return sum;
}

int average(int x, int y) {
	return x / (float) y;
}

int main() {
	int arr[5], sum = 0;  // ���������� �ʱ�ȭ�� ���Ѿ� �Ѵ�.
	float avg;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° ���� = ";
		cin >> arr[i];
		sum += arr[i];
	}

	sum = adder(arr); // arr[0], arr[1], arr[2], arr[3], arr[4]); // �迭���� �迭�� �����ּҿ� ����.
	avg = average(sum, 5);
	//avg = sum / 5.0f;

	cout << "sum = " << sum << endl;
	cout << "average = " << avg << endl;

	return 0;
}