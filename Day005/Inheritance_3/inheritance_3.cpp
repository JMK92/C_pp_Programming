#include<iostream>
#include<string>
using namespace std;

class Person {
protected : // 상속관계에서는 접근이 가능하도록 한다.
	int age;
	string name;

public:
	Person(int age, string name) 
		:age(age), name(name){}

	void show() const {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
	}

};


// 파생클래스 : 접근제한자 부모 클래스
class Student : public Person {
	//int age;
	//string name;
	string major;

public:
	Student(int age, string name, string major)
		: Person(age, name), major(major) {}
	
	void show() const {
		cout << "name = " << name << endl; // protected라서 가능함, 부모가 private이면 Person::show()를 사용해야 함.
		cout << "age = " << age << endl;
		//Person::show();
		cout << "major = " << major << endl;
	}
};


int main() {
	Student stu(11, "aaa", "컴공");
	stu.show();

	Student stu2(22, "bbb", "전자");
	stu2.show();

	//stu2.     // 부모에 접근 할려고 하는데 부모 private이라서 접근이 안됨. (상속이라도) 단, protected가 되면 접근 가능.
	return 0;

}