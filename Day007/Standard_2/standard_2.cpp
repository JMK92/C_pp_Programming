/*
	list : ���� ���� ����Ʈ, �迭�� ���� �ڷ������� ���� -> ����(�� ũ�⸦ ���� �ʾƵ� �ȴ�)
*/

#include<iostream>
#include<list>
using namespace std;

int main() {
	int arr[10];  // 10�� �Ѿ�� error����.
	list<int> li = {1, 2, 2, 3, 4, 3, 5, 5};
	/*
		swap() : �� ����� ��ġ�� ���� �ٲ�
		reverse() : ����
		sort() :����
		unique() : ������
		merge() : ����
	*/

	li.sort();  // << ������ ���X // ��µǸ� - 1, 2, 2, 3, 3, 4, 5, 5
	//li.unique(); // 1, 2, 3, 4, 5

	copy(li.begin(), li.end(), ostream_iterator<int>(cout, " "));

	return 0;
}