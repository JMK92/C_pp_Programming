#include<iostream>
#include<string>
using namespace std;

// enum { regist = 1, check_workout, eat, body_state, EXIT };

/*
	Entity class
	�ֻ��� Ŭ����
*/

class Student {
	int pass;
	string id;
	float current_weight;


public:
	Student(string id, int pass, int current_weight);

	void setPass(int pass);
	void setId(int id);
	void setCurrent_weight(int current_weight);
	string getId();
	int getPass();
	float getCurrent_weight();
	void diet(int weight);
	void studentshow();

	//void diet(int weight);
	virtual void healthshow() {}

	virtual void work_out(int muscle) {}
	virtual void powershow() {}

};

//-----------------------Student ������ ------------------------------------------
Student::Student(string id, int pass, int current_weight)
	: id(id), pass(pass), current_weight(current_weight) {}

void Student::setPass(int pass) { this->pass = pass; }

void Student::setId(int id) { this->id = id; }

void Student::setCurrent_weight(int current_weight) {
	this->current_weight = current_weight;
}
float Student::getCurrent_weight() { return current_weight; }

string Student::getId() { return id; }

int Student::getPass() { return pass; }

void Student::diet(int weight) {
	current_weight -= weight;
}

void Student::studentshow() {
	cout << "���̵�,     ��й�ȣ,     ���������," << endl;
	cout << getId() << " : " << getPass() << " : " << getCurrent_weight() << " : ";
}
/////////////////////////////////////////////////////////////////////////////////

//// Health class
//class Health : public Student {
//	int weight;
//
//public:
//	Health(string id, int pass, int current_weight, int weight);
//
//	void diet(int weight);
//	void healthshow();
//};
////-----------------------Health ������ ------------------------------------------
//Health::Health(string id, int pass, int current_weight, int weight = 0)
//	:Student(id, pass, current_weight), weight(weight) {}
//
//void Health::diet(int weight) {
//	setCurrent_weight(weight);
//}
//
//void Health::healthshow() {
//	studentshow();
//	cout << "     ���� ����" << endl;
//	cout << weight << " : ";
//}
/////////////////////////////////////////////////////////////////////////////////

// Power lift class
class Powerlift : public Student {
	int power;

public:
	Powerlift(string id, int pass, int current_weight, int power=50);

	void work_out(int muscle);
	void powershow();

};
//-----------------------Power lift ������ ------------------------------------------
Powerlift::Powerlift(string id, int pass, int current_weight, int power)
	: Student(id, pass, current_weight), power(power) {}
	
	//: Health(id, pass, current_weight, weight), power(power) {}

void Powerlift::work_out(int muscle) {
	power += muscle;
}

void Powerlift::powershow() {
	healthshow();
	cout << "�� 1RM" << endl;
	cout << power << endl;
}
/////////////////////////////////////////////////////////////////////////////////

/*
	Handler
*/
class Trainer {
	Student* stulist[100];
	int stuNum;

public:
	Trainer();

	void menu();
	void regist();
	void check_workout();
	void eat();
	void body_state();

	~Trainer();
};

//---------------------Handler�� Trainer ������ ------------------------------------------
Trainer::Trainer() : stuNum(0) {}

Trainer::~Trainer() {
	for (int i = 0; i < stuNum; i++)
		delete stulist[i];
}

void Trainer::menu() {
	cout << "===== �� ���� Menu =====" << endl;
	cout << "1. ���" << endl;
	cout << "2. � ����" << endl;
	cout << "3. ���� ���� " << endl;
	cout << "4. �� ����" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "========================" << endl;
}

void Trainer::regist() {
	string id;
	int pass;
	int c_w;

	cout << "ID = ";
	cin >> id;
	cout << "pass = ";
	cin >> pass;
	cout << "���� ������ = ";
	cin >> c_w;

	stulist[stuNum++] = new Student(id, pass, c_w);
	cout << "����� �Ϸ�Ǿ����ϴ�." << endl;
}

void Trainer::check_workout() {
	int date, pass, muscle;
	string id;

	cout << "ID = ";
	cin >> id;
	cout << "pass = ";
	cin >> pass;
	for (int i = 0; i < stuNum; i++) {
		if (stulist[i]->getPass() == pass && stulist[i]->getId() == id) {
			cout << "� �ð� = ";
			cin >> muscle;
			stulist[i]->work_out(muscle);
			stulist[i]->diet(muscle);
			cout << "� �Ϸ� �Ͽ����ϴ�." << endl;
			return;
		}
		cout << "�ٽ� �Ͻʽÿ�" << endl;
		return;
	}

}

void Trainer::eat() {
	int pass, loss, protein;
	string id;

	cout << "ID = ";
	cin >> id;
	cout << "pass = ";
	cin >> pass;
	for (int i = 0; i < stuNum; i++) {
		if (stulist[i]->getPass() == pass && stulist[i]->getId() == id) {
			cout << "� �ð� = ";
			cin >> loss;
			cout << "���� ����ƾ g�� = ";
			cin >> protein;
			stulist[i]->diet(loss);
			stulist[i]->work_out(protein);
			return;
		}

		cout << "�ٽ� �Ͻʽÿ�" << endl;
		return;
	}
	cout << "�Ļ� �Ϸ� �Ͽ����ϴ�." << endl;
}

void Trainer::body_state() {
	cout << "��� ȸ���� ����" << endl;
	for (int i = 0; i < stuNum; i++) {
		stulist[i]->powershow();
		
	}
}
/////////////////////////////////////////////////////////////////////////////////

int main() {
	int ch;
	Trainer trainer;

	while (true) {
		trainer.menu();
		cout << "���� = ";
		cin >> ch;
		switch (ch) {
		case 1: {
			trainer.regist();
			break;
		}
		case 2: {
			trainer.check_workout();
			break;
		}
		case 3: {
			trainer.eat();
			break;
		}
		case 4: {
			trainer.body_state();
			break;
		}
		case 5: {
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;
		}
		default: {
			cout << "�߸��� ���� �Դϴ�.\n";
			break;
		}
		}
	}
	return 0;
}