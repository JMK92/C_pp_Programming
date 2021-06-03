/* 변경된 CarRacing을 class로 바꾸기 */

#include<iostream>
#include"Car.h"

int main() {
	//Car car = { "aaa", 10, 0 };  // 접근 할 수 없어서 -> init 생성  
	//Car car;
	//car.init("aaa", 10);
	
	Car car("aaa", 10); // -> 생성자를 만들어서 init 실질적 필요X

	car.showCar();    //  매개변수로 들어오는 것이 아니라 인스턴스 변수로 들어오는것.

	// 속도증가
	car.Accel();    // 연료 -8, 속도 - 10
	car.showCar();

	return 0;
}