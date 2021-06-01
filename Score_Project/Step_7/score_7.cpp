/*
	7단계 : 구조체를 활용할 것.
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
//	cout << "국어 = ";
//	cin >> stu.kor;
//
//	cout << "영어 = ";
//	cin >> stu.eng;
//
//	cout << "수학 = ";
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
		cout << "국어 = ";
		cin >> stu[i].kor;

		cout << "영어 = ";
		cin >> stu[i].eng;

		cout << "수학 = ";
		cin >> stu[i].math;

		stu[i].tot = stu[i].kor + stu[i].eng + stu[i].math;
		stu[i].avg = stu[i].tot / 3.0f;
	}

	for (int i = 0; i < 3; i++) {
		cout << "tot = " << stu[i].tot << " , avg = " << stu[i].avg << endl;
	}

	return 0;
}

// 구조체가 배열보다 더욱 간결하다 -> 하지만 단점이 있다 이것을 보완하기 위해서 만든것이 class이다.