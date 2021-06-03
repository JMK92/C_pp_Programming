/* structure_1 �� Car�� class�� �ٲٱ� �� �ܰ� */

# include<iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPEED 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10 

struct Car {                    // ����ü ������ �Լ��� ������ �Ű������� �ʿ䰡 ����.
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void showCar() { // �ڵ����� ���� ���¸� ����ϴ� �޼���	
		cout << "������ID : " << gamerID << endl;
		cout << "���翬�ᷮ : " << fuelGauge << endl;
		cout << "����ӵ� : " << curSpeed << endl;
	}

	void Accel() {  // �ڵ����� �Ǽ������ ��� ������ �ϴ� �޼���
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

	void Break() {  // �ڵ����� �극��ũ����� ��� ������ �ϴ� �޼���
		// ������ ���Ҵ� ���ٰ� ����	
		if (curSpeed - BRK_STEP <= 0) {
			curSpeed = 0;
		}
		else {
			curSpeed -= BRK_STEP;
		}
	}
};

// ���� showCar(Car car) �ϸ� main�� Car car�ʹ� �ٸ� �������� ����Ͽ� �ٲ��� �ʴ´� -> ���� �������� ����� �� �ֵ��� '&' ���.



int main() {
	Car car = { "aaa", 10, 0 };

	car.showCar();    //  �Ű������� ������ ���� �ƴ϶� �ν��Ͻ� ������ �����°�.

	// �ӵ�����
	car.Accel();    // ���� -8, �ӵ� - 10
	car.showCar();

	return 0;
}