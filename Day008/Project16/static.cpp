#include<iostream>
#include<string>
using namespace std;
/*
	static : ����
	         Ŭ������ ��� ��ü���� '����'�ϴ� ��
			 static ��ü�� static�ȿ��� ���� �� �ִ�.
*/

class JBank {
	string name;
	int money;
	static double rate;      // static -> ��� ��ü�� ���������� ����
	                         // ��, ������� �� �� ����.
public:
	
	JBank(string name, int money, double r)
		: name(name), money(money) { // rate(rate) // static ���� ������� �� �� ����.
		rate = r;    
	}  
	
	void disp() {
		cout << name << " : " << money << " : " << rate << endl;
	}

};

//double JBank::rate = 0.0;   // static �ʱⰪ�� �ش�. ��� ��ü�� 0.0���� �Ǿ� ����.

int main() {
	JBank aaa("aaa", 1000, 0.5);  // �ʱ�
	aaa.disp();
	cout << endl;

 	JBank bbb("bbb", 1000, 0.3);  // �߱�
	aaa.disp();
	bbb.disp();
	cout << endl;

	JBank ccc("ccc", 1000, 0.7);   // �ı� - �����
	aaa.disp();
	bbb.disp();
	ccc.disp();



	return 0;  // ���α׷� ������ static �Ҹ�
}

