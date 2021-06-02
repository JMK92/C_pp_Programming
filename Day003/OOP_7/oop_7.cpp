/*
	���� ������ �Է¹޾� Circle �迭�� �������� �����Ѵ�.
	������ ���� �Է¹޾� Circle �迭�� �����ϰ�, 
	������ 100�̻� 200���ϸ� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
};
int main() {
	cout << "������ ���� ���� = ";
	int n;
	cin >> n;
	if (n == 0) return 0;

	Circle* p = new Circle[n];  // ���� �Ҵ�.
	for (int i = 0; i < n; i++) {
		cout << "������ = ";
		int radius;
		cin >> radius;
		p[i].setRadius(radius);
	}

	int count = 0;
	Circle* q = p; // ������ ���� ����

	for (int i = 0; i < n; i++) {
		cout << "���� = " << q->getArea() << endl;
		if (q->getArea() >= 100 && q->getArea() <= 200) {
			count++;
		}
		q++;
		
	}

	cout << "���� ���� = " << count << endl;

	delete[] p; //�迭�� ������� �� ��ȯ

	return 0;
}

//int main() {
//	int r;
//	cout << "�迭�� ũ�� = ";
//	int count;
//	cin >> count;
//	if (count == 0) return 0;
//
//	while (count != 0) {
//		cout << "������ = ";
//		cin >> r;
//		if (r < 0) break;
//		Circle* p = new Circle(r);
//
//		int ct = 0;
//		if (p->getArea() >= 100 && p->getArea() <= 200) {
//			cout << "���� ���� = " << ct << endl;
//		}
//		delete p;		
//	}
//	return 0;
//}