/*
	다섯개의 정수를 입력받아 배열에 저장한 후 그 합과 평균을
	계산하여 출력하는 프로그램을 구현하시오.
*/

#include<iostream>
using namespace std;
/*
	step1. 배열로 받아서 처리하는 바업ㅂ
	step2. 주소를 저장하는 변수-포인터 변수, 배열처럼 사용가능
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
	int arr[5], sum = 0;  // 누적변수는 초기화를 시켜야 한다.
	float avg;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 정수 = ";
		cin >> arr[i];
		sum += arr[i];
	}

	sum = adder(arr); // arr[0], arr[1], arr[2], arr[3], arr[4]); // 배열명은 배열의 시작주소와 같다.
	avg = average(sum, 5);
	//avg = sum / 5.0f;

	cout << "sum = " << sum << endl;
	cout << "average = " << avg << endl;

	return 0;
}