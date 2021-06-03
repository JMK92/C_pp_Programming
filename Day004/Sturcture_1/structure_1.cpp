# include<iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPEED 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10 

struct Car {
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
};

// 만약 showCar(Car car) 하면 main의 Car car와는 다른 기억공간을 사용하여 바뀌지 않는다 -> 같은 기억공간을 사용할 수 있도록 '&' 사용.

void showCar(Car& car) { // 자동차의 현재 상태를 출력하는 메서드	
	cout << "소유자ID : " << car.gamerID << endl;
	cout << "현재연료량 : " << car.fuelGauge << endl;
	cout << "현재속도 : " << car.curSpeed << endl;
}

void Accel(Car& car) {  // 자동차의 악셀페달을 밞는 행위를 하는 메서드
	if (car.fuelGauge <= 0) {
		return;
	}
	else {     // 연료가 충분하다면
		car.fuelGauge -= FUEL_STEP;

		if (car.curSpeed + ACC_STEP > 200) {
			car.curSpeed = MAX_SPEED;
		}
		else {
			car.curSpeed += ACC_STEP;
		}
	}
}

void Break(Car& car) {  // 자동차의 브레이크페달을 밞는 행위를 하는 메서드
	// 연료의 감소는 없다고 가정	
	if (car.curSpeed - BRK_STEP <= 0) {
		car.curSpeed = 0;
	}
	else {
		car.curSpeed -= BRK_STEP;
	}
}

int main() {
	Car car = { "aaa", 10, 0 };

	showCar(car);

	// 속도증가
	Accel(car);    // 연료 -8, 속도 - 10
	showCar(car);

	return 0;
}