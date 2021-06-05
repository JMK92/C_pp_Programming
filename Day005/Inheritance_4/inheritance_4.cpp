/*
	접근제한자(접근지정자)
	- public
	- protected : 상속
	- private
*/

#include<iostream>
using namespace std;

class Base {
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	void showData() {
		cout << num1 << " : " << num2 << " : " << num3 << endl;
	}
};

// private < protected < public  --> 넓은 개념을 우선시 protected로 상속 받으면 부모 public도 protected로 취급된다.
class Derived : public Base {
public:
	void show() {
		cout << num1; // privated이라서 접근이 안됨.
		cout << num2;
		cout << num3;
	}
};

int main() {
	Derived obj;

	cout << obj.num1;
	cout << obj.num2;  // protected는 상속받은곳은 가능, 외부에서는 private과 동일.
	cout << obj.num3;
	return 0;
}