#pragma once

#include<iostream>
using namespace std;
#include<string>

// ����� 

class Car {

	// private
	string gamerID;
	int fuelGauge;
	int curSpeed;

public:
	Car(string id, int fuel);
	void init(string id, int fuel);    // ����ʵ带 �ʱ�ȭ�ϴ� �޼��� , -> ������ �޼��带 ����鼭 �ʿ� ������.
	void showCar();
	void Accel();
	void Break();
};
