/*
	��ü => Ŭ����: ����������, ����ʵ�, ����޼���
		- ��Ȱ�� : ����Ʈ������ ���� -> ����Ʈ���� ����
		- ���¼ҽ�

	Ŭ���� : ����ʵ� - ��ü�� Ư��(or �Ӽ�)
	         ����޼��� - ��ü�� ������ �ൿ
			���������� - private, protected, public

	"���� ���������� 2000�� ��ġ�� ����� �����ߴ�."
	��ü : ��, ������, ���(IoT - �繰���ͳ�(�Ӻ���� �ý��� Ȯ��))

	��       => ����ʵ�(��, ������ ���), ����޼���(����� ����)
	������ => ����ʵ�(�Ǹ��� ���, ��� ����), ����޼���(����� �Ǹ�)

*/
#include<iostream>
using namespace std;

class AppleSeller {
	// ����ʵ�
	int apples;
	int price;
	int sales;    // ����ݾ�

public:

	void init(int apples, int price) {
		this->apples = apples;
		this->price = price;
		sales = 0;
	}

	int appleSales(int money) {
		int apple = money / price;
		apples -= apple;     // �������� ���� ����� ���� �� ������� ��ŭ ����.
		sales += money;
		return apple;
	}

	void salesResult() {
		cout << "���� ����� : " << apples << endl;
		cout << "����ݾ� : " << sales << endl;
	}
};

class AppleBuyer{
	    // ����ʵ� - �Ӽ� or ����
	int money;
	int numOfApple;

public: // ��� �޼��� - ���� or �ൿ

	void init(int money){
		this->money = money;
		numOfApple = 0;
	}

	void buy(AppleSeller& seller, int don) {			      
		money -= don;     // ����� �����ϴ� ��
		numOfApple = seller.appleSales(don);
	}

	void buyer() {
		cout << "������ ����� : " << numOfApple << endl;
	}

	void buyerResault() {
		cout << "������ ����� : " << numOfApple << endl;
		cout << "���� �� : " << money << endl;
	}

};



int main() {
	AppleBuyer buyer;
	AppleSeller seller;
	buyer.init(10000);   // init �ʱ�ȭ.
	seller.init(50, 1000);

	buyer.buyerResault();
	buyer.buy(seller, 2000);
	buyer.buyerResault();    // 8000, 2
	seller.salesResult();    // 48, 2000

	return 0;
}