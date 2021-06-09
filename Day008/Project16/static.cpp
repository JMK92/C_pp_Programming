#include<iostream>
#include<string>
using namespace std;
/*
	static : 정적
	         클래스의 모든 객체들이 '공유'하는 값
			 static 객체는 static안에만 담을 수 있다.
*/

class JBank {
	string name;
	int money;
	static double rate;      // static -> 모든 객체가 공통적으로 적용
	                         // 단, 내꺼라고 할 수 없다.
public:
	
	JBank(string name, int money, double r)
		: name(name), money(money) { // rate(rate) // static 땜에 내꺼라고 할 수 없다.
		rate = r;    
	}  
	
	void disp() {
		cout << name << " : " << money << " : " << rate << endl;
	}

};

//double JBank::rate = 0.0;   // static 초기값을 준다. 모든 객체가 0.0으로 되어 있음.

int main() {
	JBank aaa("aaa", 1000, 0.5);  // 초기
	aaa.disp();
	cout << endl;

 	JBank bbb("bbb", 1000, 0.3);  // 중기
	aaa.disp();
	bbb.disp();
	cout << endl;

	JBank ccc("ccc", 1000, 0.7);   // 후기 - 성장기
	aaa.disp();
	bbb.disp();
	ccc.disp();



	return 0;  // 프로그램 끝날때 static 소멸
}

