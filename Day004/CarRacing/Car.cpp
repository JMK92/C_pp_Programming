#include<iostream>
#include<cstring>  // strcpy 사용
#include<string>

#include"Car.h"

using namespace std;
#pragma warning(disable:4996)

//#define ID_LEN 20
//#define MAX_SPEED 200
//#define FUEL_STEP 2
//#define ACC_STEP 10
//#define BRK_STEP 10 

enum {     // 위의 define을 열거법을 사용.
	ID_LEN = 20, MAX_SPEED = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
};

// 구동부

Car::Car(string id, int fuel) {
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::init(string id, int fuel) {    // 멤버필드를 초기화하는 메서드 , -> 생서자 메서드를 만들면서 필요 없어짐.
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::showCar() { // 자동차의 현재 상태를 출력하는 메서드	
	cout << "소유자ID : " << gamerID << endl;
	cout << "현재연료량 : " << fuelGauge << endl;
	cout << "현재속도 : " << curSpeed << endl;
}

void Car::Accel() {  // 자동차의 악셀페달을 밞는 행위를 하는 메서드
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

void Car::Break() {  // 자동차의 브레이크페달을 밞는 행위를 하는 메서드
		// 연료의 감소는 없다고 가정	
	if (curSpeed - BRK_STEP <= 0) {
		curSpeed = 0;
	}
	else {
		curSpeed -= BRK_STEP;
	}
}
