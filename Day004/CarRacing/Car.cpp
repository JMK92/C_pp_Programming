#include<iostream>
#include<cstring>  // strcpy ���
#include<string>

#include"Car.h"

using namespace std;
#pragma warning(disable:4996)

//#define ID_LEN 20
//#define MAX_SPEED 200
//#define FUEL_STEP 2
//#define ACC_STEP 10
//#define BRK_STEP 10 

enum {     // ���� define�� ���Ź��� ���.
	ID_LEN = 20, MAX_SPEED = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
};

// ������

Car::Car(string id, int fuel) {
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::init(string id, int fuel) {    // ����ʵ带 �ʱ�ȭ�ϴ� �޼��� , -> ������ �޼��带 ����鼭 �ʿ� ������.
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::showCar() { // �ڵ����� ���� ���¸� ����ϴ� �޼���	
	cout << "������ID : " << gamerID << endl;
	cout << "���翬�ᷮ : " << fuelGauge << endl;
	cout << "����ӵ� : " << curSpeed << endl;
}

void Car::Accel() {  // �ڵ����� �Ǽ������ ��� ������ �ϴ� �޼���
	if (fuelGauge <= 0) {
		return;
	}
	else {     // ���ᰡ ����ϴٸ�
		fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP > 200) {
			curSpeed = MAX_SPEED;
		}
		else {
			curSpeed += ACC_STEP;
		}
	}
}

void Car::Break() {  // �ڵ����� �극��ũ����� ��� ������ �ϴ� �޼���
		// ������ ���Ҵ� ���ٰ� ����	
	if (curSpeed - BRK_STEP <= 0) {
		curSpeed = 0;
	}
	else {
		curSpeed -= BRK_STEP;
	}
}
