#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
	Ŭ���� 
*/

class Book {
	string title;
	string writer;
	int price;

public:
	Book();     // ����Ʈ ������
	Book(string t, string w, int p);

	string getTitle() const;
	void setTitle(string t);
	string getWriter() const;
	void setWriter(string w);
	int getPrice() const;
	void setPrice(int p);

	void bookInfo() const;
};

Book::Book() {
	// default Constructor (����Ʈ ������) - �Ű������� ���� ������
	// ����ʵ带 �ʱ�ȭ�����ִ� ��Ȱ�� �����Ѵ�.
	title = "";
	writer = "";
	price = 0;
}

Book::Book(string t, string w, int p) {
	title = t;
	writer = w;
	price = p;
}

string Book::getTitle() const {
	return title;
}

void Book::setTitle(string t) {
	title = t;
}

string Book::getWriter() const {
	return writer;
}

void Book::setWriter(string w) {
	writer = w;
}

int Book::getPrice() const {
	return price;
}

void Book::setPrice(int p) {
	price = p;
}

void Book::bookInfo() const {
	cout << "å���� : " << title << endl;
	cout << "���ڸ� : " << writer << endl;
	cout << "å���� : " << price << endl << endl;
}

/*
	Ŭ���� �̸� : BookHandler
	Ŭ���� ���� : Control Ŭ����
	ó����� 
	1. å�� ����ϴ� �۾�
	2. ��ϵ� å�� ���� ������ ���
	3. ��ϵ� å�� ��� �ݾ��� ������ ���
	4. ��ϵ� å�� ���ڸ��� ���� å�� ������ ���
	5. å ������ ���� �ش� å�� ������ �����ϵ��� ����
	6. �� ���̻��� å�� ��Ƽ� ó���� �� �ֵ��ΰ� �ڷᱸ���� Ȱ��
*/

class BookHandler {
	vector<Book> book;

public:
	// å�� ����ϴ� �۾�
	void addBook();

	// ���� ��ϵ� å�� ���� ����
	void getBook();

	// ��ϵ� ��� å�� ���� ���
	void showAllbook();

	// ��ϵ� å�� ���� ����
	void showAllprice();

	// ���ڸ� ���� å ���� ���
	void getBookInfo();

	// ���� ���� å ����
	void editBook();
};

void BookHandler::addBook() {
	string title;
	string writer;
	int price;
	// �Է¹��۸� ���� ����
	cin.ignore();

	cout << "å���� = ";
	//cin >> title;
	getline(cin, title);
	cout << "���ڸ� = ";
	//cin >> writer;
	getline(cin, writer);
	cout << "å���� = ";
	cin >> price;

	//Book b(title, writer, price);
	book.push_back(Book(title, writer, price));

	cout << "å ����� �Ϸ��߽��ϴ�." << endl;
}

void BookHandler::getBook() {
	cout << "��ϵ� å�� ���� : " << book.size() << endl;
}

void BookHandler::showAllbook() {
	for (auto it = book.begin(); it != book.end(); it++) {
		//Book imsi = *it;
		//imsi.bookInfo();
		it->bookInfo();
	}
}

void BookHandler::showAllprice() {
	int sum = 0;
	for (auto it = book.begin(); it != book.end(); it++) {
		sum += it->getPrice();
	} 
	cout << "�� �������� : " << sum << endl;
}

void BookHandler::getBookInfo() {
	
	cout << "���ڸ� = ";
	string w;
	getline(cin, w);

	Book b;
	for (auto it = book.begin(); it != book.end(); it++) {
		if (it->getWriter() == w) {
			it->bookInfo();
			return;
		}
	}
	cout << "�Է��� ���ڿ� ���� ������ �߰ߵ��� �ʾҽ��ϴ�.\n";
}

void BookHandler::editBook() {
	// �Է¹��۸� ���� ���� ---> �����Է� �������� �� �� ���.
	cin.ignore();
	cout << "å���� = ";
	string t;
	getline(cin, t);

	for (auto it = book.begin(); it != book.end(); it++) {
		if (it->getTitle() == t) {
			cout << "���ڸ� = ";
			string w;
			getline(cin, w);
			cout << "å���� = ";
			int p;
			cin >> p;
			it->setWriter(w);
			it->setPrice(p);

		}
	}
	cout << "�Է��� å ������ �������� �ʽ��ϴ�.\n";
}

int main() {
	BookHandler manager;
	while (true) {
		// �޴� ���
		cout << " == Book Manager ==\n";
		cout << "1. ���� ���\n";
		cout << "2. ���� �˻�\n";
		cout << "3. ���� ���\n";
		cout << "4. �۾� ����\n";
		cout << "===================\n";
		int ch;
		cout << "���� = ";
		cin >> ch;
		/*
			���ڿ��� ������ϴ� �Լ� : gets(), puts()
			gets(����); ���ڿ��� �Է� �ϴ� �Լ�
			puts(����); ���ڿ��� ��� �ϴ� �Լ�
		*/      
		//fflush(stdin)  //stdio.h -> C style
		
		// �Է¹��۸� ���� ����
		cin.ignore();

		switch (ch) {
		case 1: manager.addBook(); break;
		case 2: {
			cout << "== �˻���� ==\n";
			cout << "[1]���ڸ�  [2]������";
			int c;
			cin >> c;

			if (c == 1)manager.getBookInfo();
			else if (c == 2) manager.editBook();
			else cout << "�ùٸ��� �ʴ� �����Դϴ�.\n";
			break;
		}
		case 3:
			manager.showAllbook(); break;
		case 4:
			cout << "���α׷��� �����մϴ�.\n";
			return 0;
		}
	}

	return 0;
}