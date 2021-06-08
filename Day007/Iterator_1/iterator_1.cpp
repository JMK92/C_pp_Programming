/*
	Iterator
	- �ݺ���
	- �����̳��� ���Ҹ� ����Ű�� ������
	- ���� ����
	  ��ü���� �����̳ʸ� �����Ͽ� �ݺ��� ����
	  vector<int>::iterator it; - intŸ���� ���� vector���� �����ͺ��� it
	  it = v.begin() -> �ش� vector�� ���۰� �ּҸ� ����Ų��.
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	vector<int>::iterator it; // ������ ���� (container�� �����ϴ� ������ ������)
	it = v.begin();        // it �ּҴ� vector�� ���� �ּ�

	it++;   // it = it + 1
	int num =* it; // it �� �ּ� �Ϲݺ��� num���� ����X // 2

	num = num * 2;  // 4
	*it = num;    // 1, 4, 3, 4, 5

	it = v.erase(it); // ���� it�� 2��°�� ����. // 1, 3, 4, 5

	it = v.end(); // �ڷ� �̵�

	for (it = v.begin(); it != v.end(); it++) {  // ������ �� �̵�
		cout << *it << " ";
	}

	cout << endl;
	return 0;
}