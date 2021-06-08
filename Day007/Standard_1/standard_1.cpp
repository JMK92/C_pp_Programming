/*
	STL(Standard Template Library : �Ϲ�ȭ ���α׷���
	- �Ϲ�ȭ ���α׷����� �����͸� �߽��ϴ� ��ü���� ���α׷��ְ���
	  �޸� ���α׷��� �˰��� ������ �� ���
	- C++ ǥ�� ���ø� ���̺귯��
	  �ݺ���(Iterator)
	  �����̳�(Container) : ���� Ÿ���� ���� ��ü�� ����
	                        Ŭ���� ���ø�(�Ϲ�ȭ)
	- �˰���(Algorithm) : �Լ���

	- �����̳� : ����(sequence) - ������� ������ ����, ����(associative), �����(adapter)

	- ���� �����̳� (������� ������ ����) : vector, list, deque(stack + queue)
	- ���� �����̳� : set, map(key�� value - python�� dict�� ���)
	- ����� �����̳� : stack(LIFO), queue(FIFO) 
*/

#include<iostream>
#include<vector>   // vector �� ����ҷ��� �����;���.
using namespace std;

int main() {
	// ���Ͱ�ü ���� �� �ʱ�ȭ
	vector<int> vc = { 10, 20, 30 };  // vector ����Ϸ��� � Ÿ���� ������� ��������� -> vector�� ���ø��̱⶧����
	                                  // �ʱ�ȭ�� �߰�ȣ.
	cout << "���� ������ ũ�� : " << vc.size() << endl;  // .size() -> ũ�⸦ �˼� ����.

	// ���� ��� �߰�
	vc.push_back(40);    // ����־�� �ڿ��ٰ�

	cout << "������ �׹�° ��� : " << vc[3] << endl; // vector�� �迭(�����迭)�̿��� �迭ó�� ���� ����.

	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " ")); // ostream_iterator(��� �ݺ��� intŸ��) cout(�ַܼ�) " " (��ĭ�� ��)
	 
	return 0;
}