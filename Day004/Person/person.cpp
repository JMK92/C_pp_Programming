#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
//#include<string>

using namespace std;

class Person {
private:
	char* name;     // �����Ҵ�
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
		cout << "�̸� = " << name << endl;
		cout << "���� = " << age << endl;
		cout << endl;
	}

	~Person() {
		delete[] name;
		cout << "�Ҹ��� ȣ��" << endl;
		//delete[] name;
	}
};

int main() {

	
	Person arr[3];       // ��ü �迭
	char curName[100];   // ������ 99��, �ѱ� 49��.
	char* str;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� = ";
		cin >> curName;
		cout << "���� = ";
		cin >> age;

		len = strlen(curName) + 1; // ��ĭ �����.
		str = new char[len];    // �����Ҵ�
		strcpy(str, curName);   // ����. str = curname

		arr[i].setPerson(str, age);
	}

	for (int i = 0; i < 3; i++) {
		arr[i].showPerson();
	}
		return 0;
}


//Person arr[3];   // ��ü �迭 -> �迭 3��
	//Person* ptr[100];  // ��ü �����͹迭 -> �����Ͱ� 100��
	//p = arr;         // arr[0]�� �����ּҿ� ���� �� &arr[0]

	//Person* p, * q, * r;       // ������ ����
	//p = &arr[0];
	//q = &arr[1];
	//r = &arr[2];  // �ݺ��� ����ϰ� �ʹ�. ������

	//Person* ptr[3];  // �ݺ��� ����ϰ� ������ �̷��� �ص� ��
	//for (int i = 0; i < 3; i++) {
	//	//arr[i].showPerson();
	//	ptr[3]->showPerson();              // �����ͷε� ������ ����.
	//	
 //       //p->showPerson();
	//	//p++;                         // ���� �ּ�(0����) ����  2�������� ���� �ؼ� p++�� �̵�.

	//}


