/*
	����������(����������)
	- public
	- protected : ���
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

// private < protected < public  --> ���� ������ �켱�� protected�� ��� ������ �θ� public�� protected�� ��޵ȴ�.
class Derived : public Base {
public:
	void show() {
		cout << num1; // privated�̶� ������ �ȵ�.
		cout << num2;
		cout << num3;
	}
};

int main() {
	Derived obj;

	cout << obj.num1;
	cout << obj.num2;  // protected�� ��ӹ������� ����, �ܺο����� private�� ����.
	cout << obj.num3;
	return 0;
}