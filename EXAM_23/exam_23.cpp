/*
	국어, 영어, 수학 점수를 입력받아 총점과 평균을 계산하여 출력한 후
	평균을 이용하여 학점을 부여한다.
	학점은 평균이 90이상이면 'A 학점', 80점 이상이면 'B학점',
	70점 이상이면 'C학점', 60점 이상이면'D학점', 이외는 'F학점'이 출력되도록 구현
	단, 주어진 입출력 형식에 맞게 프로그램을 구현할 것.

	< 입력 행사 >
	국어 =
	영어 =
	수학 =

	총점 : xx, 평균 : xx, 학점 : xx
*/

#include<iostream>
using namespace std;

int main() {
	int kor;
	int eng;
	int mat;
	int total = 0;
	float mean = 0;
	string grade;

	cout << "국어 = ";
	cin >> kor;
	cout << "영어 = ";
	cin >> eng;
	cout << "수학 = ";
	cin >> mat;

	total = kor + eng + mat;

	mean = (total / 3.0);

	
	if (mean >= 90)
		grade = "A학점 입니다";
	else if (mean >= 80)
		grade = "B학점 입니다";
	else if (mean >= 70)
		grade = "C학점 입니다";
	else if (mean >= 60)
		grade = "D학점 입니다";
	else
		grade = "F학점 입니다";

	cout << "총점 : " << total << ", 평균 : " << mean << ", 학점은 : " << grade << endl;




	return 0;
}