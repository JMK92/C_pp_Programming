#include<iostream>
using namespace std;

class Point;

class PointOP {
	int opcnt;

public:
	PointOP() : opcnt(0) {}

	Point PointAdd(const Point&, const Point&);
	Point PointSub(const Point&, const Point&);
	~PointOP() {
		cout << "Operation times : " << opcnt << endl;
	}
};

class Point {
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos) 
		: x(xpos), y(ypos) {}

	friend Point PointOP ::PointAdd(const Point&, const Point&);  // const 의미 : 값을 변경 할 생각이 없다.
	friend Point PointOP ::PointSub(const Point&, const Point&);  
	friend void showPointPos(const Point&);                   // friend 사용 함으로 Point꺼는 아니지만 Point 자기꺼 처럼 사용 가능 하다.
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) {
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);           // Point에 Friend로 선언이 되어 있어서 x, y에 직접 접근 가능.
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2) {
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

void showPointPos(const Point& pos) {
	cout << "x = " << pos.x << endl;
	cout << "y = " << pos.y << endl;
}

int main() {
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	showPointPos(op.PointAdd(pos1, pos2));
	showPointPos(op.PointSub(pos1, pos2));

	return 0;
}
