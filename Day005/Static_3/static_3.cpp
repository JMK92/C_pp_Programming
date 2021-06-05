#include<iostream>
using namespace std;

class Test {
	int num1;
	static int num2;

public:
	Test(int n) : num1(n) {}

	static void Adder(int n) {
		num1 += n;      // static함수는 static 밖에 못 담는다.
		num2 += n;
	}
};

int Test::num2 = 0;