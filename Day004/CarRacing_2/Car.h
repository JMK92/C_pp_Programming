#pragma once

#include<iostream>
using namespace std;
#include<string>

// 선언부 

class Car {

	// private
	string gamerID;
	int fuelGauge;
	int curSpeed;

public:
	Car(string id, int fuel);
	void init(string id, int fuel);    // 멤버필드를 초기화하는 메서드 , -> 생서자 메서드를 만들면서 필요 없어짐.
	void showCar();
	void Accel();
	void Break();
};
