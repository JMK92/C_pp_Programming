/* ����� CarRacing�� class�� �ٲٱ� */

#include<iostream>
#include"Car.h"

int main() {
	//Car car = { "aaa", 10, 0 };  // ���� �� �� ��� -> init ����  
	//Car car;
	//car.init("aaa", 10);
	
	Car car("aaa", 10); // -> �����ڸ� ���� init ������ �ʿ�X

	car.showCar();    //  �Ű������� ������ ���� �ƴ϶� �ν��Ͻ� ������ �����°�.

	// �ӵ�����
	car.Accel();    // ���� -8, �ӵ� - 10
	car.showCar();

	return 0;
}