/*
	5단계 : 배열을 활용하여 구현할 것.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	int score[4];
	/* score[0] : kor, score[1] : eng, score[2] : math, score[3] : tot*/
	float avg;
	char grade;
	
	//char d[][5] = { "kor", "eng", "math" };  // 2차원 배열이 되면 묶을 수 가 없다.
	string s[3] = { "kor", "eng", "math" };

	/*do {
		cout << "kor = ";
		cin >> score[0];
	} while (score[0] < 0 || score[0] > 100);

	do {
		cout << "eng = ";
		cin >> score[1];
	} while (score[1] < 0 || score[1] > 100);

	do {
		cout << "math = ";
		cin >> score[2];
	} while (score[2] < 0 || score[2] > 100);*/
	score[3] = 0; // 초기화
	for(int i = 0; i < 3; i++) {
		do {
			cout << s[i] + " = ";
			cin >> score[i];
		} while (score[i] < 0 || score[i]>100);
		score[3] += score[i];
	}


	//score[3] = score[0] + score[1] + score[2];

	avg = score[3] / 3.0f;

	switch (int(avg) / 10) {
	case 10:case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}


	cout << "총점 : " << score[3] << " , 평균 : " << avg << endl;
	cout << "학점 : " << grade << endl;


	return 0;
}