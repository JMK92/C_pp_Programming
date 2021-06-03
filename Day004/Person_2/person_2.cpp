#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
//#include<string>

using namespace std;

class Person {
private:
	char* name;     // 동적할당
	int age;

public:
	Person() {
		name = NULL;
		age = 0;
	}

	Person(char* curName, int curAge) {
		age = curAge;
		name = new char[strlen(curName) + 1];
		strcpy(name, curName);
	}

	void setPerson(char* curName, int curAge) {
		age = curAge;
		name = new char[strlen(curName) + 1];
		strcpy(name, curName);
	}

	void setName(char* curName) {
		name = curName;
	}

	string getName() {
		return name;
	}

	void seAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}

	void showPerson() {
		cout << "이름 = " << name << endl;
		cout << "나이 = " << age << endl;
		cout << endl;
	}

	~Person() {
		delete[] name;
		cout << "소멸자 호출" << endl;
		//delete[] name;
	}
};

int main() {
	Person* parr[3];
	char curName[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "이름 = ";
		cin >> curName;
		cout << "나이 = ";
		cin >> age;

		parr[i] = new Person(curName, age);   // 동적 할당
	}
	
	for (int i = 0; i < 3; i++) {
		parr[i]->showPerson();
	}

	// 동적할당 반환
	for (int i = 0; i < 3; i++) {
		delete parr[i];
	}
	

	return 0;
}