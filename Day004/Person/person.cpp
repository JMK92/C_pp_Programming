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

	
	Person arr[3];       // 객체 배열
	char curName[100];   // 영문자 99자, 한글 49자.
	char* str;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "이름 = ";
		cin >> curName;
		cout << "나이 = ";
		cin >> age;

		len = strlen(curName) + 1; // 한칸 띄어줌.
		str = new char[len];    // 동적할당
		strcpy(str, curName);   // 복사. str = curname

		arr[i].setPerson(str, age);
	}

	for (int i = 0; i < 3; i++) {
		arr[i].showPerson();
	}
		return 0;
}


//Person arr[3];   // 객체 배열 -> 배열 3개
	//Person* ptr[100];  // 객체 포인터배열 -> 포인터가 100개
	//p = arr;         // arr[0]의 시작주소와 같다 즉 &arr[0]

	//Person* p, * q, * r;       // 포인터 변수
	//p = &arr[0];
	//q = &arr[1];
	//r = &arr[2];  // 반복문 사용하고 싶다. 밑으로

	//Person* ptr[3];  // 반복문 사용하고 싶으면 이렇게 해도 됨
	//for (int i = 0; i < 3; i++) {
	//	//arr[i].showPerson();
	//	ptr[3]->showPerson();              // 포인터로도 접근이 가능.
	//	
 //       //p->showPerson();
	//	//p++;                         // 시작 주소(0번지) 에서  2번지까지 가야 해서 p++로 이동.

	//}


