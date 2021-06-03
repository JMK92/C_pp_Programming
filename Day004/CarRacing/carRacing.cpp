/* structure_1 의 Car를 class로 바꾸기 전 단계 */

# include<iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPEED 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10 

struct Car {                    // 구조체 안으로 함수가 들어오면 매개변수가 필요가 없음.
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void showCar() { // 자동차의 현재 상태를 출력하는 메서드	
		cout << "소유자ID : " << gamerID << endl;
		cout << "현재연료량 : " << fuelGauge << endl;
		cout << "현재속도 : " << curSpeed << endl;
	}

	void Accel() {  // 자동차의 악셀페달을 밞는 행위를 하는 메서드
		if (fuelGauge <= 0) {
			return;
		}
		else {     // 연료가 충분하다면
			fuelGauge -= FUEL_STEP;

			if (curSpeed + ACC_STEP > 200) {
				curSpeed = MAX_SPEED;
			}
			else {
				curSpeed += ACC_STEP;
			}
		}
	}

	void Break() {  // 자동차의 브레이크페달을 밞는 행위를 하는 메서드
		// 연료의 감소는 없다고 가정	
		if (curSpeed - BRK_STEP <= 0) {
			curSpeed = 0;
		}
		else {
			curSpeed -= BRK_STEP;
		}
	}
};

// 만약 showCar(Car car) 하면 main의 Car car와는 다른 기억공간을 사용하여 바뀌지 않는다 -> 같은 기억공간을 사용할 수 있도록 '&' 사용.



int main() {
	Car car = { "aaa", 10, 0 };

	car.showCar();    //  매개변수로 들어오는 것이 아니라 인스턴스 변수로 들어오는것.

	// 속도증가
	car.Accel();    // 연료 -8, 속도 - 10
	car.showCar();

	return 0;
}