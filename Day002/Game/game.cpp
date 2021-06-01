/*
	가위 바위 보 게임만들기
	두 사람이 하는 가위, 바위, 보 게임을 만들어 보세요.
	주어진 입출력 형식에 맞게 구현하세요.

	< 입력 및 출력 형식 >
	게임에 참가할 사람이름 : 방자 향단
	게임을 시작합니다.
	방자 = 가위
	향단 = 바위
	향단이 이겼습니다.
	다시(Y/N) = y

	게임에 참가할 사람이름 : 순이 철수
	순이 = 바위
	철수 = 바위
	비겼습니다.
	다시(Y/N) = N
	프로그램을 종료합니다.
*/

#include<iostream>
#include<string>
using namespace std;

//int main() {
//	string p1, p2;
//	string r, s, p;
//	string answer;
//	string N;
//	
//	
//	
//
//	while (true) {
//		cout << "게임에 차가할 사람이름 : ";
//		cin >> p1 >> p2;
//		cout << "게임을 시작합니다.";
//		if p1 
//		cout << p1 << " = " << ;
//		cout << p2 << " = " << ;
//		cout << "다시(Y/N) : ";
//		cin >> answer;
//		if(answer == "N") break;
//	}
//	
//
//
//
//
//	return 0;
//}
int main() {
	string a, b;
	string c, d;
	char check;

	while (true) {
		cout << "게임에 차가할 사람이름 : ";
		cin >> a >> b;

		cout << a << " = " ;
		cin >> c;
		cout << b << " = " ;
		cin >> d;

		if (c == "가위" && d == "보" || c == "바위" && d == "가위" || c == "보" && d == "바위")
			cout << a << "가 이겼습니다." << endl;
		else if (d == "가위" && c == "보" || d == "바위" && c == "가위" || d == "보" && c == "바위")
			cout << b << "가 이겼습니다." << endl;
		else
			cout << a << "와 " << b << "는 비겼습니다." << endl;
		
		cout << "다시(Y/N) : ";
		cin >> check;
		if (check == 'N' || check == 'n') break;
	}


	return 0;
}
