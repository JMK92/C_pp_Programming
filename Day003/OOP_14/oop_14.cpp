#include<iostream>
using namespace std;

char& find(char s[], int index) { // �ּ� ����
	return s[index];
}

int main() {
	char name[] = "Nike";
	cout << name << endl; // Nike

	find(name, 0) = 'S'; // name[0] �ε���
	cout << name << endl; // Sike

	char& ref = find(name, 2); // name[2]
	ref = 't';               
	cout << name << endl; // Site         =============> ��������
	return 0;
}























//// �迭�� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
//int get(int arr[]) { // main arr�� ����
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		cout << i << "��° ���� = ";
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
//	cout << "�迭 �� = " << sum << endl;
//
//	return 0;
//}