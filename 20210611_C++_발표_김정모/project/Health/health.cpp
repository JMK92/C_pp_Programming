#include<iostream>
#include<string>
using namespace std;


/*
	Entity Class
	�ֻ��� Ŭ����
*/

class Student {
	int pass;
	string id;
	int current_weight;
	

public:
	Student(string id, int pass, int current_weight);

	void setPass(int pass);
	void setId(int id);
	void setCurrent_weight(int current_weight);
	string getId();
	int getPass();
	int getCurrent_weight();

	void studentshow();

	virtual void diet(int loss) { }
    virtual void healthshow(){}

	virtual void work_out(int muscle){}
	virtual void powershow(){}

};

//----------------------- Student ������ ------------------------------------------
Student::Student(string id, int pass, int current_weight)
	: id(id), pass(pass), current_weight(current_weight){}

void Student::setPass(int pass) { this->pass = pass; }

void Student::setId(int id) { this->id = id; }

void Student::setCurrent_weight(int current_weight) {
	this->current_weight -= current_weight;
}
int Student::getCurrent_weight() { return current_weight; }

string Student::getId() { return id; }

int Student::getPass() { return pass;}

void Student::studentshow() {
	cout << "|================ �� ���� ===============|"<<endl;
	cout << "|----------------------------------------|"<<endl;
	cout << "���̵�,     ��й�ȣ,     ���������," << endl;
	cout << getId() << "     :    " << getPass() << "      :     " << getCurrent_weight() << endl;
}
/////////////////////////////////////////////////////////////////////////////////

// Health class                 
class Health : public Student {
	int weight;

public:
	Health(string id, int pass, int current_weight, int weight);
		
	void diet(int weight);
	void healthshow();
};
//----------------------- Health ������ ------------------------------------------
Health::Health(string id, int pass, int current_weight, int weight)
	:Student(id, pass, current_weight), weight(weight) {}

void Health::diet(int weight) {
	setCurrent_weight(weight);
}

void Health::healthshow() {
	studentshow();
	cout << "��ǥ ������" << endl;
	cout << weight << endl;
}
/////////////////////////////////////////////////////////////////////////////////

// Power lift class
class Powerlift : public Health {
	int power;

public:
	Powerlift(string id, int pass, int current_weight, int weight, int power);
		
	void work_out(int muscle);
	void powershow();
};
//----------------------- Power lift ������ ------------------------------------------
Powerlift::Powerlift(string id, int pass, int current_weight, int weight, int power)
	: Health(id, pass, current_weight, weight), power(power) {}

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
	Handler Class
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

//--------------------- Handler�� Trainer ������ ------------------------------------------
Trainer::Trainer() : stuNum(0){}

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
	int pass, weight, power;
	int c_w;
	int ch;
		
	while(true){
		cout << "1. free" << endl;
		cout << "2. health" << endl;
		cout << "3. Powerlift" << endl;
		cin >> ch;

		if (ch == 1) {
			cout << "ID = ";
			cin >> id;
			cout << "pass = ";
			cin >> pass;
			cout << "���� ������ = ";
			cin >> c_w;
			stulist[stuNum++] = new Student(id, pass, c_w);
			break;
		}
		else if (ch == 2) {
			cout << "ID = ";
			cin >> id;
			cout << "pass = ";
			cin >> pass;
			cout << "���� ������ = ";
			cin >> c_w;
			cout << "��ǥ ������ = ";
			cin >> weight;
			stulist[stuNum++] = new Health(id, pass, c_w, weight);
			break;
		}
		else if (ch == 3) {
			cout << "ID = ";
			cin >> id;
			cout << "pass = ";
			cin >> pass;
			cout << "���� ������ = ";
			cin >> c_w;
			cout << "��ǥ ������ = ";
			cin >> weight;
			cout << "1RM �� ���� = ";
			cin >> power;

			stulist[stuNum++] = new Powerlift(id, pass, c_w, weight, power);
			break;
		}
		else {
			cout << "�߸��� ���� �Դϴ�.";
			break;
		}
	}	
	cout << "����� �Ϸ�Ǿ����ϴ�." << endl;
}

void Trainer::check_workout() {
	int pass, muscle;
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
			//stulist[i]->setCurrent_weight(muscle);
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
			cout << "���� ���� Cal�� = ";
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
	cout << "��� ȸ���� ����"<< endl;
	for (int i = 0; i < stuNum; i++) {
		stulist[i]->powershow();
	}
}
/////////////////////////////////////////////////////////////////////////////////

// Main 
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