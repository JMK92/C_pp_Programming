/*
	����ü(structure) -> Ŭ����
	- ���� �ٸ� Ÿ���� �ڷ����� �ϳ��� ��� �����ϴ� �ڷᱸ��
	- ����ü�� ��� or ��� ����
	- ���� : struct ����ü�� ��{
	       int a;
		  float b;
		  char c;
	    }; -> ��ü 9byte
*/

#include<iostream>
using namespace std;

struct Book {
	char title[30];
	char author[30];
	int price;
};  // ����ü �ϼ�

int main() {
	// ����ü ����(��ü)
	//struct Book book; // ����ü ���� ���� -> Ŭ������ �ν��Ͻ��� ���
	struct Book web_book = { "C++ Program", "ȫ�浿", 28000 }; // ����ü �ʱ�ȭ.
	//book.author // . ���̷�Ʈ ������ ������� ����

	cout << "å���� : " << web_book.title << endl;
	cout << "���ڸ� : " << web_book.author << endl;
	cout << "å���� : " << web_book.price << endl;

	return 0;
}