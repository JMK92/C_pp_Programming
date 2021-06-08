/*
	vector : ���� ũ�� �迭(ũ�Ⱑ ��������X)
*/

#include<iostream>
#include<vector>
//#include<algorithm> // ��� �˰����� ����ϰ� ������ ���
using namespace std;

/*
	push-back(���) : �������� �߰�
	at(�ε���) : ����, ����
	begin() : �����̳��� ������ġ
	end() : �����̳��� ��������ġ
	empty() : ���Ͱ� ����ִ����� �Ǵ�( bool������ ���� true/false )
	erase(iterator it) : it�� ����Ű�� ���� ����
	insert(iterator it, element) : iterator it(������)�� element(���)�� ����
	size() : ������ ����
*/
int main() {
	vector<int> v; // �������� ����

	// ���� ����
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);  // 1, 2, 3

	// ���� ������ �뷮
	int s = v.size();   // ���� ũ�� 3
	int c = v.capacity(); // default 10 (�ڷ����� ���� ũ�Ⱑ �޶�����) - �ִ�ũ��

	// ���� ����
	v.at(2) = 5; // vector 2��° ������ 5�� ����. // 1, 2, 5
	int num = v.at(1); // num = 2
	v[0] = 10;  // 10, 2, 5
	int num2 = v[2]; // num2 = 5

	// ������ ��� ���
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	cout << endl;

	return 0;
}