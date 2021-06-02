#include<iostream>
using namespace std;

char& find(char s[], int index) { // 주소 리턴
	return s[index];
}

int main() {
	char name[] = "Nike";
	cout << name << endl; // Nike

	find(name, 0) = 'S'; // name[0] 인덱스
	cout << name << endl; // Sike

	char& ref = find(name, 2); // name[2]
	ref = 't';               
	cout << name << endl; // Site         =============> 참조리턴
	return 0;
}























//// 배열을 받아서 합을 반환하는 함수
//int get(int arr[]) { // main arr이 들어옴
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		cout << i << "번째 정수 = ";
//		cin >> arr[i];
//		sum += arr[i];
//	}
//	return sum;
//}
//
//int main() {
//	int arr[5];
//	int sum = 0;
//
//	sum = get(arr);
//
//	
//
//	cout << "배열 합 = " << sum << endl;
//
//	return 0;
//}