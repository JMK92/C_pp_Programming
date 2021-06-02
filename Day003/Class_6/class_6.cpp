/*
	주어진 main()이 작동하도록 Rect클래스를 구현하시오.
	Rect 클래스는 width, height의 두 멤버 변수와 3개의 생성자,
	그리고 isSquare()를 포함하도록 기술하시오.
*/
#include<iostream>
using namespace std;


// 클래스 영역
class Rect {
public:
	int width;
	int height;

public:
	Rect();
	Rect(int n);
	Rect(int n, int m);
	bool isSquare();
};

Rect::Rect() { // 기본생성자 - 멤버필드를 초기화 시켜주는 역활.
	width = height = 3;
}
Rect::Rect(int n){
	width = height = n;	 
}
Rect::Rect(int n, int m){
	width = n;
	height = m;

}
bool Rect::isSquare() {
	if (width == height)
		return true;
	else
		return false;	
}


// main
int main() {
	Rect r1;
	Rect r2(3, 5);
	Rect r3(3);

	if (r1.isSquare())
		cout << "r1은 정사각형입니다." << endl;
	if (r2.isSquare())
		cout << "r2은 정사각형입니다." << endl;
	if (r3.isSquare())
		cout << "r3은 정사각형입니다." << endl;


	return 0;
}

/*
	출력결과
	r1은 정사각형입니다.
	r3은 정사각형입니다.

*/