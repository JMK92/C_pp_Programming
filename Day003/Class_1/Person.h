#include<iostream>
#include<string>
using namespace std;

class Person { // ����� �𵨸�
	// ����������
	// ����ʵ� -> private ( Ʋ �� �ٲٰ� �� )

	// ����������
	// ����޼��� -> public ( Ʋ�� �� �ٲ����� �ȿ� ������ �ٲܼ� �ְ� �� )

public:
	string name;


public: // ���������� (public - ������ ���� �� �� �ִ�. ��, �ν��Ͻ��� ����)
	//������ �޼��� : ��ü(�ν��Ͻ�)�� ������ �� �ڵ����� ȣ��Ǵ� �޼���
	//Person() { // default constructor(����Ʈ ������) -> �Ű������� ������ ���� �ʴ� ������
	Person(string irum){
	// ��ü�� ������ �� ������ �۾��� ���
	// ����ʵ带 �ʱ�ȭ�����ִ� ��Ȱ�� �����Ѵ�.
		name = irum;

	}


	void walk(int speed) { // void - return���� ���� �Լ�
		cout << name << "�� " << speed << "�� �ӵ��� �ɾ�ϴ�." << endl;
	}

	void run(int speed) {
		cout << name << "�� " << speed << "�� �ӵ��� �پ�ϴ�." << endl;
	}
};
