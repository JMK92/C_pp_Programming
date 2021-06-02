/*
	�־��� main()�� �۵��ϵ��� RectŬ������ �����Ͻÿ�.
	Rect Ŭ������ width, height�� �� ��� ������ 3���� ������,
	�׸��� isSquare()�� �����ϵ��� ����Ͻÿ�.
*/
#include<iostream>
using namespace std;


// Ŭ���� ����
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

Rect::Rect() { // �⺻������ - ����ʵ带 �ʱ�ȭ �����ִ� ��Ȱ.
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
		cout << "r1�� ���簢���Դϴ�." << endl;
	if (r2.isSquare())
		cout << "r2�� ���簢���Դϴ�." << endl;
	if (r3.isSquare())
		cout << "r3�� ���簢���Դϴ�." << endl;


	return 0;
}

/*
	��°��
	r1�� ���簢���Դϴ�.
	r3�� ���簢���Դϴ�.

*/