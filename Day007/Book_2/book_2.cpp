#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
	클래스 
*/

class Book {
	string title;
	string writer;
	int price;

public:
	Book();     // 디폴트 생성자
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
	// default Constructor (디폴트 생성자) - 매개변수가 없는 생성자
	// 멤버필드를 초기화시켜주는 역활을 수행한다.
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
	cout << "책제목 : " << title << endl;
	cout << "저자명 : " << writer << endl;
	cout << "책가격 : " << price << endl << endl;
}

/*
	클래스 이름 : BookHandler
	클래스 유형 : Control 클래스
	처리기능 
	1. 책을 등록하는 작업
	2. 등록된 책에 대한 정보를 출력
	3. 등록된 책에 모든 금액을 누적해 출력
	4. 등록된 책의 저자명을 통해 책의 정보를 출력
	5. 책 제목을 통해 해당 책의 내용을 수정하도록 구현
	6. 한 권이상의 책을 담아서 처리할 수 있도로고 자료구조를 활용
*/

class BookHandler {
	vector<Book> book;

public:
	// 책을 등록하는 작업
	void addBook();

	// 현재 등록된 책의 수를 리턴
	void getBook();

	// 등록된 모든 책의 정보 출력
	void showAllbook();

	// 등록된 책의 가격 누적
	void showAllprice();

	// 저자명에 따른 책 정보 출력
	void getBookInfo();

	// 제목에 따른 책 수정
	void editBook();
};

void BookHandler::addBook() {
	string title;
	string writer;
	int price;
	// 입력버퍼를 비우는 과정
	cin.ignore();

	cout << "책제목 = ";
	//cin >> title;
	getline(cin, title);
	cout << "저자명 = ";
	//cin >> writer;
	getline(cin, writer);
	cout << "책가격 = ";
	cin >> price;

	//Book b(title, writer, price);
	book.push_back(Book(title, writer, price));

	cout << "책 등록을 완료했습니다." << endl;
}

void BookHandler::getBook() {
	cout << "등록된 책의 개수 : " << book.size() << endl;
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
	cout << "총 도서가격 : " << sum << endl;
}

void BookHandler::getBookInfo() {
	
	cout << "저자명 = ";
	string w;
	getline(cin, w);

	Book b;
	for (auto it = book.begin(); it != book.end(); it++) {
		if (it->getWriter() == w) {
			it->bookInfo();
			return;
		}
	}
	cout << "입력한 저자에 대한 도서는 발견되지 않았습니다.\n";
}

void BookHandler::editBook() {
	// 입력버퍼를 비우는 과정 ---> 문자입력 연속으로 할 때 사용.
	cin.ignore();
	cout << "책제목 = ";
	string t;
	getline(cin, t);

	for (auto it = book.begin(); it != book.end(); it++) {
		if (it->getTitle() == t) {
			cout << "저자명 = ";
			string w;
			getline(cin, w);
			cout << "책가격 = ";
			int p;
			cin >> p;
			it->setWriter(w);
			it->setPrice(p);

		}
	}
	cout << "입력한 책 정보가 존재하지 않습니다.\n";
}

int main() {
	BookHandler manager;
	while (true) {
		// 메뉴 출력
		cout << " == Book Manager ==\n";
		cout << "1. 도서 등록\n";
		cout << "2. 도서 검색\n";
		cout << "3. 도서 출력\n";
		cout << "4. 작업 종료\n";
		cout << "===================\n";
		int ch;
		cout << "선택 = ";
		cin >> ch;
		/*
			문자열을 입출력하는 함수 : gets(), puts()
			gets(변수); 문자열을 입력 하는 함수
			puts(변수); 문자열을 출력 하는 함수
		*/      
		//fflush(stdin)  //stdio.h -> C style
		
		// 입력버퍼를 비우는 과정
		cin.ignore();

		switch (ch) {
		case 1: manager.addBook(); break;
		case 2: {
			cout << "== 검색방법 ==\n";
			cout << "[1]저자명  [2]도서명";
			int c;
			cin >> c;

			if (c == 1)manager.getBookInfo();
			else if (c == 2) manager.editBook();
			else cout << "올바르지 않는 선택입니다.\n";
			break;
		}
		case 3:
			manager.showAllbook(); break;
		case 4:
			cout << "프로그램을 종료합니다.\n";
			return 0;
		}
	}

	return 0;
}