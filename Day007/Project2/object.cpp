/*
	클래스와 객체
	- 세상에 모든 것은 객체다.
	- 객체는 캡슐화 된다.
	- 정보은닉

	클래스(class) : 객체를 모델링하는 틀
	- 접근제한자        : private, protected, public
	- 멤버 필드(변수)   : field, attribute(속성), state(상태) 
	- 멤버 메서드(함수) : behavior(행동) or action(행위)

	TV
	상태
	 - on/off
	 - channel
	 - volume

	행위
	 - power on
	 - power off
	 - increase channel
	 - decrease channel
	 - increase volume
	 - decrease volume
*/

#include<iostream>
using namespace std;

class TV {
private:
	bool power;
	int channel;
	int volume;

public:
	// 생성자(Constructor) 메서드
	TV();

	void init();
	void powerOn();
	void powerOff();
	void increaseChannel();
	void decreaseChannel();
	void increaseVolume();
	void decreaseVolume();

	void state();
};

TV::TV() {
	power = false;
	channel = 0;
	volume = 0;
}
void TV::init() {
	power = false;
	channel = 0;
	volume = 0;
}

void TV::powerOn() {
	power = true;
}

void TV::powerOff() {
	power = false;
}

void TV::increaseChannel() {
	if (power != true)
		powerOn();

	channel++;
}

void TV::decreaseChannel() {
	if (power != true)
		powerOn();
	if (channel <= 0)
		return;
	
	channel--;
}

void TV::increaseVolume() {
	if (power != true)
		powerOn();
	volume++;
}

void TV::decreaseVolume() {
	if (power != true || volume <= 0) {
		powerOn();
		return;
	}		
	volume--;
}

void TV::state() {
	cout << "TV상태 : " << power << endl;
	cout << "채널 : " << channel << endl;
	cout << "볼륨 : " << volume << endl;
}
int main() {
	// instance 객체
	TV tv;        // 객체가 생성되면 자동으로 생성자메서드 호출
	 
	//tv.init();  // 객체 생성후 가장 먼저 수행하는 작업. // 생성자랑 같은 역활이지만 인스턴스로 호출해야 한다.
		
	tv.state();
	tv.powerOn();
	tv.state();
	tv.decreaseChannel();

	tv.increaseChannel();
	tv.increaseVolume();
	tv.state();

	return 0;
}