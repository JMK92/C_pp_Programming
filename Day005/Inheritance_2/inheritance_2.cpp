/*
	ģ�� : �̸�, ����ó
	���б� : �̸�, ����ó, �ּ�
	�����б� : �̸�, ����ó, �ּ�, ���
	���б� : �̸�, ����ó, �а�
	��ȸ : �̸�, ����ó, ����, ����
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
	//BBB(int y):y(y) {}  // AAA �� �����ڸ� �ʱ�ȭ ���� ���ؼ� '{}' �������� ��, 
	                    //�Ű������� ������ �ִ� �����ڸ� ��� ������ �ݵ�� �ʱ�ȭ �ؾ� �Ѵ�.

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
	CCC cp;     // ����
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
//class High  { // C++���� ��������ڴ� public
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