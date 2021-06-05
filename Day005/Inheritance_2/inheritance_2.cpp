/*
	친구 : 이름, 연락처
	중학교 : 이름, 연락처, 주소
	고등학교 : 이름, 연락처, 주소, 취미
	대학교 : 이름, 연락처, 학과
	사회 : 이름, 연락처, 직장, 직급
*/

#include<iostream>
#include<string>
using namespace std;

class AAA {
public :
	int x;
	AAA(int x):x(x){}
};

class BBB : public AAA {
public:
	int y; 
	//BBB(int y):y(y) {}  // AAA 의 생성자를 초기화 하지 못해서 '{}' 빨간색이 뜸, 
	                    //매개변수를 가지고 있는 생성자를 상속 받으면 반드시 초기화 해야 한다.

	BBB(int x, int y) :AAA(x), y(y){}
};

class CCC : public BBB {
public:
	int z;
	CCC(int x, int y, int z): BBB(x, y), z(z) {}
};

int main() {
	//AAA ap;
	//ap.x = 1;
	//BBB bp;
	//bp.y = 2;
	CCC cp;     // 가능
	cp.z = 3;
	cp.x = 1;
	cp.y = 2;

	return 0;

}






//class Middle {  
//	string name;
//	string phone;
//
//public:
//
//};
//
//class High  { // C++에서 상속제한자는 public
//	//string name;
//	//string phone;
//	string hobby;
//};
//
//class Univ : public Middle {
//	//string name;
//	//string phone;
//	string major;
//
//};
//
//class Soc : public Middle {
//	//string name;
//	//string phone;
//	string company;
//	string position;
//};