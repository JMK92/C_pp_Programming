/*
	교통카드 잔액 관리하는 프로그램
	1. 교통카드의 초기 금액은 20000원이다.
	2. 운임은 고정 요금이 아닌 거리 규칙에 따라 측정 및 공제 된다.
	3. 기본 요금은 40km에 720원, 추가 요금은 41km부터 8km당 80원
	4. 프로그램은 각 이동 거리를 입력하여 카드의 최종 잔액을 출력한다.
	5. 최소 이동 거리는 4km, 최대 이동거리는 178km이다.
	6. 입력 값이 위에 주어진 범위를 벗어나면 현재 잔액을 출력하고 프로그램을 종료한다,
	7. 더이상 공제되지 않으면 이동할 수 없으므로 현재 잔액을 출력하고 종료한다.
	8. 또한, 입력값이 '-1'이면 프로그램을 종료한다.   
*/

#include <iostream>
using namespace std;

int main() {
	int ib = 20000;//초기 잔액
	int a, b, fare;//a=기본요금, b=추가요금, fare=기본요금+추가요금
	a = 720; b = 80;
	int dis = 0;//dis=이동 거리
	cout << "초기 잔액: " << ib << endl;

	while (1) {
		cout << "이동 거리 입력 : ";
		cin >> dis;
		cout << "_______________________________________" << endl;
		if (dis == -1)
			break;
		else if (dis < 4 || dis>178) {//최소거리와 최대거리 범위를 벗어나는 경우
			cout << "현재 잔액 : " << ib << endl;
			cout << "_______________________________________" << endl;
			break;
		}
		else if (dis <= 40) //기본요금
			fare = a;
		else { //기본요금+추가요금
			if (dis <= 48)
				fare = a + b;
			else if ((dis - 40) % 8 == 0)
				fare = a + ((dis - 40) / 8) * b;
			else
				fare = a + ((dis - 40) / 8 + 1) * b;
		}

		if (ib > 0) {
			ib -= fare;
			if (ib < 0) {
				cout << "현재 잔액 : " << ib + fare << endl;
				cout << "_______________________________________" << endl;
				break;
			}
			cout << "요금 : " << fare << endl;
			cout << "현재 잔액 : " << ib << endl;
		}
	}
	cout << "프로그램 종료!" << endl;
	return 0;
}