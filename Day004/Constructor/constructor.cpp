/*
	복사 생성자

	int num = 20;
	int &ref = num;
	    ||
	int num(20);
	int &ref(num);
*/

#include<iostream>
using namespace std;

class Sample {
	int num1;
	int num2;

public:
	Sample(int n1, int n2) : num1(n1), num2(n2) {} // 콜론 초기화 -> 생성자만 가능.  
	Sample(Sample & copy)
		: num1(copy.num1), num2(copy.num2) {}      // 복사 생성자. -> 생성자를 복사 한다.
	
	void show() {
		cout << "num1 = " << num1 << endl;
		cout << "num2 = " << num2 << endl;
	}
};

int main() {
	Sample sam1(15, 20);
	//Sample sam2 = sam1;    // 객체 복사 = sam2(sam1);
	Sample sam2(sam1);      // Sample(Sample & copy)이 호출


	sam2.show();

	return 0;
}