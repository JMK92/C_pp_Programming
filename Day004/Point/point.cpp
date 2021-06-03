#include<iostream>
using namespace std;

class Point {
	int xpos;
	int ypos;

public:
	
	Point() : xpos(0), ypos(0) { // 디폴트 생성자 ( 방법 2개 ) - 일반 초기화, 콜론 초기화. 
		/*xpos = 0;
		ypos = 0;*/
	}

	Point(int x, int y) 
		: xpos(x), ypos(y) {
		/*xpos = x;
		ypos = y;*/
	}

 	//Point(int x=0, int y=0)                ====  위의 2개를 합한
	//	: xpos(x), ypos(y) {                 ====      모형 
	//	/*xpos = x;                          ====
	//	ypos = y;*/                          ====
	//}


	void disp() {
		cout << "점(x, y) = (" << xpos << ", " << ypos << ")" << endl;
	}
	
	void init(int x, int y) { 
		xpos = x;
		ypos = y;
	}

	void setX(int x) { xpos = x; } // private으로 직접 접근X -> 다른 방식으로 접근할 수 있도록 해줌
	void setY(int y) { ypos = y; }

	int getX() { return xpos; }    // set은 넣어주는거고 값을 다시 가지고 오고 싶으면 get을 만들어 값을 가지고 옴.
	int getY() { return ypos; }
};

int main() {
	//Point ap;                 // 생성자만 있으면  ap 빨간줄 -> 디폴트 생성자 만들기
	//Point bp(3, 5);
	//Point cp(10, 20);

	// 객체 배열
	Point p[3] = { Point(), Point(3, 5), Point(10, 20) };  // p[0], p[1], p[2] 
												       // 위의 것들이 불편하다 -> 객체배열, 클래스도 자료형이기때문에 배열 가능

	/*ap.setX(1);
	ap.setY(1);*/

	//ap.init(1, 1);                                        // 이것도 불편하다 -> 생성자 메서드 만들기

	//ap.disp();

	/*cout << "x좌표값 = " << ap.getX() << endl;
	cout << "y좌표값 = " << ap.getX() << endl;*/

	/*ap.disp();
	bp.disp();*/

	for (int i = 0; i < 3; i++) {
		p[i].disp();
	}

	return 0;
}