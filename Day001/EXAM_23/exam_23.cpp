/*
	����, ����, ���� ������ �Է¹޾� ������ ����� ����Ͽ� ����� ��
	����� �̿��Ͽ� ������ �ο��Ѵ�.
	������ ����� 90�̻��̸� 'A ����', 80�� �̻��̸� 'B����',
	70�� �̻��̸� 'C����', 60�� �̻��̸�'D����', �ܴ̿� 'F����'�� ��µǵ��� ����
	��, �־��� ����� ���Ŀ� �°� ���α׷��� ������ ��.

	< �Է� ��� >
	���� =
	���� =
	���� =

	���� : xx, ��� : xx, ���� : xx
*/

#include<iostream>
using namespace std;

int main() {
	int kor;
	int eng;
	int mat;
	int total = 0;
	float mean = 0;
	string grade;

	cout << "���� = ";
	cin >> kor;
	cout << "���� = ";
	cin >> eng;
	cout << "���� = ";
	cin >> mat;

	total = kor + eng + mat;

	mean = (total / 3.0);

	
	if (mean >= 90)
		grade = "A���� �Դϴ�";
	else if (mean >= 80)
		grade = "B���� �Դϴ�";
	else if (mean >= 70)
		grade = "C���� �Դϴ�";
	else if (mean >= 60)
		grade = "D���� �Դϴ�";
	else
		grade = "F���� �Դϴ�";

	cout << "���� : " << total << ", ��� : " << mean << ", ������ : " << grade << endl;




	return 0;
}