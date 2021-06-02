/*
	�簢��(Rectangle) ��ü�� �����Ͻÿ�.
	����δ� �ʺ�(width)�� ����(height)�� �ʵ�� ������, 
	�簢���� ������ ����Ͽ� �ǵ����ִ� �޼��� getArea()�� ���� �Ұ�

	��, Ŭ������ ����ο� �����η� �и��Ͽ� �����Ұ�.
*/

#include<iostream>
using namespace std;

// Ŭ���� �����
class Rectangle {
public:
	// ��� �ʵ�
	int width;
	int height;

public:
	// ��� �޼���
	int getArea();
};

// Ŭ���� ������                  // Ŭ������ �޼���
int Rectangle::getArea(){       // int, double�̳� ����޼���� �����ϰ� �ۼ�.
	return width * height;
}


int main() {
	Rectangle rect;
	

	rect.height = 3;
	rect.width = 5;

	 
	 int area = rect.getArea();

	cout << "rect�� ������ " << area << endl;
	cout << "rect�� ������ " << rect.getArea() << endl;


	return 0;
}