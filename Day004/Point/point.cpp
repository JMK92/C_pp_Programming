#include<iostream>
using namespace std;

class Point {
	int xpos;
	int ypos;

public:
	
	Point() : xpos(0), ypos(0) { // ����Ʈ ������ ( ��� 2�� ) - �Ϲ� �ʱ�ȭ, �ݷ� �ʱ�ȭ. 
		/*xpos = 0;
		ypos = 0;*/
	}

	Point(int x, int y) 
		: xpos(x), ypos(y) {
		/*xpos = x;
		ypos = y;*/
	}

 	//Point(int x=0, int y=0)                ====  ���� 2���� ����
	//	: xpos(x), ypos(y) {                 ====      ���� 
	//	/*xpos = x;                          ====
	//	ypos = y;*/                          ====
	//}


	void disp() {
		cout << "��(x, y) = (" << xpos << ", " << ypos << ")" << endl;
	}
	
	void init(int x, int y) { 
		xpos = x;
		ypos = y;
	}

	void setX(int x) { xpos = x; } // private���� ���� ����X -> �ٸ� ������� ������ �� �ֵ��� ����
	void setY(int y) { ypos = y; }

	int getX() { return xpos; }    // set�� �־��ִ°Ű� ���� �ٽ� ������ ���� ������ get�� ����� ���� ������ ��.
	int getY() { return ypos; }
};

int main() {
	//Point ap;                 // �����ڸ� ������  ap ������ -> ����Ʈ ������ �����
	//Point bp(3, 5);
	//Point cp(10, 20);

	// ��ü �迭
	Point p[3] = { Point(), Point(3, 5), Point(10, 20) };  // p[0], p[1], p[2] 
												       // ���� �͵��� �����ϴ� -> ��ü�迭, Ŭ������ �ڷ����̱⶧���� �迭 ����

	/*ap.setX(1);
	ap.setY(1);*/

	//ap.init(1, 1);                                        // �̰͵� �����ϴ� -> ������ �޼��� �����

	//ap.disp();

	/*cout << "x��ǥ�� = " << ap.getX() << endl;
	cout << "y��ǥ�� = " << ap.getX() << endl;*/

	/*ap.disp();
	bp.disp();*/

	for (int i = 0; i < 3; i++) {
		p[i].disp();
	}

	return 0;
}