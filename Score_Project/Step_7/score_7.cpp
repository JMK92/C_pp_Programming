/*
	7�ܰ� : ����ü�� Ȱ���� ��.
*/

#include<iostream>
using namespace std;

struct Student {
	int kor, eng, math, tot;
	float avg;
	char grade;
};

//int main() {
//	Student stu;
//
//	cout << "���� = ";
//	cin >> stu.kor;
//
//	cout << "���� = ";
//	cin >> stu.eng;
//
//	cout << "���� = ";
//	cin >> stu.math;
//
//	stu.tot = stu.kor + stu.eng + stu.math;
//	stu.avg = stu.tot / 3.0f;
//
//	cout << "tot = " << stu.tot << " , avg = " << stu.avg << endl;
//	
//
//	return 0;
//}

int main() {
	Student stu[3];
	for (int i = 0; i < 3; i++) {
		cout << "���� = ";
		cin >> stu[i].kor;

		cout << "���� = ";
		cin >> stu[i].eng;

		cout << "���� = ";
		cin >> stu[i].math;

		stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].tot / 3.0f;
	}

	for (int i = 0; i < 3; i++) {
		cout << "tot = " << stu[i].tot << " , avg = " << stu[i].avg << endl;
	}

	return 0;
}

// ����ü�� �迭���� ���� �����ϴ� -> ������ ������ �ִ� �̰��� �����ϱ� ���ؼ� ������� class�̴�.