/*
	�迭�� ���� �Ҵ� �� ��ȯ
	������Ÿ�� *������ ���� = new ������Ÿ��[�迭�� ũ��];
	delete [] ������ ����;
*/

// ����ڷκ��� ������ ������ �Է¹޾� �迭�� �������� �Ҵ��ϰ�
// ������ �Է¹޾� ����� ����Ͽ� ����ϴ� ���α׷����� �����Ͻÿ�.

#include<iostream>
using namespace std;

int main() {
	cout << "�迭�� ũ�� = ";
	int count;
	cin >> count;
	if (count == 0) return 0;

	// �����Ҵ�
	int* p = new int[count]; //countũ�� ��ŭ ���� �Ҵ�
	// ����ó��
	if (!p) {
		cout << "�޸𸮸� �Ҵ����� ���߽��ϴ�." << endl;
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < count; i++) {
		cout << i + 1 << "��° ��  = ";
		cin >> p[i]; // ������ ���� �迭ó�� ��� ����
		sum += p[i];

	}

	cout << "��� = " << sum / count << endl;

	// ��ȯ(�Ҹ�)
	delete[] p;

	return 0;
}