#include<iostream>
#include<string>
using namespace std;

// enum { regist = 1, check_workout, eat, body_state, EXIT };

/*
	Entity class
	최상위 클래스
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

//-----------------------Student 구현부 ------------------------------------------
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
	cout << "아이디,     비밀번호,     현재몸무게," << endl;
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
////-----------------------Health 구현부 ------------------------------------------
//Health::Health(string id, int pass, int current_weight, int weight = 0)
//	:Student(id, pass, current_weight), weight(weight) {}
//
//void Health::diet(int weight) {
//	setCurrent_weight(weight);
//}
//
//void Health::healthshow() {
//	studentshow();
//	cout << "     현재 무게" << endl;
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
//-----------------------Power lift 구현부 ------------------------------------------
Powerlift::Powerlift(string id, int pass, int current_weight, int power)
	: Student(id, pass, current_weight), power(power) {}
	
	//: Health(id, pass, current_weight, weight), power(power) {}

void Powerlift::work_out(int muscle) {
	power += muscle;
}

void Powerlift::powershow() {
	healthshow();
	cout << "총 1RM" << endl;
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

//---------------------Handler인 Trainer 구현부 ------------------------------------------
Trainer::Trainer() : stuNum(0) {}

Trainer::~Trainer() {
	for (int i = 0; i < stuNum; i++)
		delete stulist[i];
}

void Trainer::menu() {
	cout << "===== 몸 관리 Menu =====" << endl;
	cout << "1. 등록" << endl;
	cout << "2. 운동 일지" << endl;
	cout << "3. 음식 일지 " << endl;
	cout << "4. 몸 상태" << endl;
	cout << "5. 프로그램 종료" << endl;
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
	cout << "현재 몸무게 = ";
	cin >> c_w;

	stulist[stuNum++] = new Student(id, pass, c_w);
	cout << "등록이 완료되었습니다." << endl;
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
			cout << "운동 시간 = ";
			cin >> muscle;
			stulist[i]->work_out(muscle);
			stulist[i]->diet(muscle);
			cout << "운동 완료 하였습니다." << endl;
			return;
		}
		cout << "다시 하십시요" << endl;
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
			cout << "운동 시간 = ";
			cin >> loss;
			cout << "먹은 프로틴 g수 = ";
			cin >> protein;
			stulist[i]->diet(loss);
			stulist[i]->work_out(protein);
			return;
		}

		cout << "다시 하십시요" << endl;
		return;
	}
	cout << "식사 완료 하였습니다." << endl;
}

void Trainer::body_state() {
	cout << "모든 회원의 정보" << endl;
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
		cout << "선택 = ";
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
			cout << "프로그램을 종료합니다." << endl;
			return 0;
		}
		default: {
			cout << "잘못된 접근 입니다.\n";
			break;
		}
		}
	}
	return 0;
}