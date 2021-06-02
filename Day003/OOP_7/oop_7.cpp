/*
	원의 개수를 입력받아 Circle 배열을 동적으로 생성한다.
	반지름 값을 입력받아 Circle 배열에 저장하고, 
	면적이 100이상 200이하면 원의 개수를 출력하는 프로그램을 작성하시오.
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
	cout << "생성할 원의 개수 = ";
	int n;
	cin >> n;
	if (n == 0) return 0;

	Circle* p = new Circle[n];  // 동적 할당.
	for (int i = 0; i < n; i++) {
		cout << "반지름 = ";
		int radius;
		cin >> radius;
		p[i].setRadius(radius);
	}

	int count = 0;
	Circle* q = p; // 포인터 변수 선언

	for (int i = 0; i < n; i++) {
		cout << "면적 = " << q->getArea() << endl;
		if (q->getArea() >= 100 && q->getArea() <= 200) {
			count++;
		}
		q++;
		
	}

	cout << "원의 개수 = " << count << endl;

	delete[] p; //배열로 만들었을 때 반환

	return 0;
}

//int main() {
//	int r;
//	cout << "배열의 크기 = ";
//	int count;
//	cin >> count;
//	if (count == 0) return 0;
//
//	while (count != 0) {
//		cout << "반지름 = ";
//		cin >> r;
//		if (r < 0) break;
//		Circle* p = new Circle(r);
//
//		int ct = 0;
//		if (p->getArea() >= 100 && p->getArea() <= 200) {
//			cout << "원의 개수 = " << ct << endl;
//		}
//		delete p;		
//	}
//	return 0;
//}