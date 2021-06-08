/*
	������ ���� ���α׷��� �����ϵ��� �����Ͻÿ�.
	< �Է� �� ������� ?
	����(1. ��, 2. �簢��, 3. ��������, 4. ����)
	���� = 1
	x = 5
	y = 5
	r = 5

	���� = 1
	x = 3
	y = 4
	r = 7

	���� = 2
	x = 10
	y = 10
	h = 7
	w = 9
	
	< ó������ >
	1. ����ڰ� ���ϴ� ������ �Է¹޵��� �����Ѵ�.
	2. ������ �� 10���� �����ϵ��� ��ü�迭�� �����Ѵ�.
		�̶�, �� 4, �� 6 �̰ų� ��7, �� 3 ���....
		������ ������ 10���� �Է¹޵��� �����Ѵ�.
	3. �������⸦ �����ϸ� ������ �Է��� ������ �庸�� ��µǵ��� �����Ѵ�.
	4. ������ ���α׷��� ����ǵ��� �����ϴ�.
	5. ��(Circle)�� �������� ����� �����Ѵ�.
	6. �簢��(Rect)�� �ʺ�(width)�� ���� (height)�� ����� �����Ѵ�.
*/

#include<iostream>
using namespace std;

/* ������� �� ���� ��üȭ�ϴ� Ŭ����*/
class Point {
	int x;
	int y;

public:
	Point() :x(0), y(0) {
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
	}

	void showPosition() const {
		cout << "��(x, y) = (" << x << ", " << y << ")" << endl;
	}

	virtual void disp() const {}   // �������̵�-> �ڽ��� �޼��尡 �����ϵ� �ڽ��� �޼��带 �θ� ������ �־�� �Ѵ�.
};

class Circle : public Point {
	int r;

public:
	Circle() {                // �θ� �Ű������� ������ �ʱ�ȭ �������.
		// Point() �����Ǿ��ִ�.
		cout << "r = ";
		cin >> r;
	}

	void disp() const {
		showPosition();
		cout << "������(r) = " << r << endl;
	}
};

class Rect:public Point {
	int w;
	int h;

public:
	Rect() {
		cout << "h = ";
		cin >> h;
		cout << "w = ";
		cin >> w;
	}

	void disp() const {
		showPosition();
		cout << "�ʺ�(w) = " << w << ", ����(h) = " << h << endl;
	}
};


Point* p[10];    // ��ü ���� �迭
int index = 0;


int main() {
	int ch;

	for (int i = 0; i < 10; i++) {
		cout << "����(1. ��, 2. �簢��, 3. ��������, 4. ����)";
		cin >> ch;

		if (ch == 1) {
			p[i] = new Circle();
		}
		else if(ch == 2){
			p[i] = new Rect();
		}
		else if (ch == 3) {
			for(int a = 0; a < i; a++)   
				p[a]->disp();
			i--;
		}
		else if (ch == 4) {
			cout << "���α׷��� �����մϴ�." << endl;
			for (int j = 0; j < index; j++)
				delete p[j];
			return 0;
		}
		else {
			cout << "�߸� ���� �Ǿ����ϴ�. " << endl;
			i--;			
		}
	}

	return 0;
}