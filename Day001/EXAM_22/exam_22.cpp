/*
	���
	- ���α׷��� �帧�̳� ������ ������ �� ����ϴ� ����
	- �Ϲ������� ������ �Ʒ���, �¿��� ��� ����ȴ�.
	- ���� : ���ǹ�, �ݺ���, ��Ÿ���

	1. ���ǹ�
	 - ���ǽĿ� ���� ������ �����Ѵ�.
	 - ���ǽ��� �� ����� �� �Ǵ� �������� �����Ǵ� ��
	 - ���ǽ��� �񱳿����ڳ� ���������ڰ� �� �� �ִ�.
	 - ���� : �ܼ�if��, if-else��, else if��, switch-case��
	 - �ܼ�if�� : �־��� ���ǽ��� ���϶��� ������ ������ �� ���
	   if(���ǽ�){
		// ���ǽ��� ���϶� ������ ����
	   }
	 - if-else : ������ ���̳� �����϶� ������ ������ ������ �� ���
	   if(���ǽ�){
		���ǽ��� ���� �� ������ ����
	   }
	   else{
		���ǽ��� �����϶� ������ ����
	   }
	 - ���� if�� : if���ȿ� �� �ٸ� if���� ��� ����
	             : �������� ���ǿ� ���� ������ ������ �� ���
	   if (���ǽ�1) {
	     ���ǽ� 1�� ���� ��
	   }
	   else if (���ǽ�2) {
	      ������ 2�� ���� ��
	   }
	   else{
	     ���ǽ�1, 2�� ��� ������ ��
	   }

	 - switch-case �� : ���� if���� ����ȭ�� ����
	   switch(�� or ���� - ������ ){
	   case ��1 : ������ ����               // �ֻ��� �ϰ�� �ֻ����� ���� �� �մ� ��� �� ����� ��.
	   case ��2 : ������ ����
	   case ��n : ������ ����
	   default : case�� �ش�Ǵ� ���� ���� ��� ������ ����.
	   } -> �ӵ��� ����
*/

#include<iostream>
using namespace std;

// �ϳ��� ���ڸ� �Է¹޾� ������� �Ǵ��ϴ� ���α׷�
/*
int main() {
	// ����
	int num;

	// �Է¹�
	cout << "�� = ";
	cin >> num;

	// ó����
	

	// ��¹�
	if(num > 0) { // ���� �Ѿ� ������ ������ {} ���.
		cout << "����Դϴ�." << endl; // C++�� ���̽�ʹ� �ٸ��� �鿩���⿡ �ΰ����� �ʴ�.
		cout << "���α׷��� �����մϴ�." << endl;
	}
	

	return 0;
}*/

// �Է¹��� ���� ������� �������� �����ϴ� ���α׷�
/*
int main() {
	int num;

	cout << "�� = ";
	cin >> num;

	if (num > 0) 
		cout << "��� �Դϴ�" << endl;
	
	else
		cout << "���� �Դϴ�" << endl;
	
	cout << "���α׷��� �����մϴ�." << endl;


	return 0;
}*/

// ����� ���� �׸��� 0�� �����ϴ� ���α׷�.
int main() {
	int num;

	cout << "�� = ";
	cin >> num;

	if (num > 0)
		cout << "��� �Դϴ�" << endl;

	else if (num < 0)
		cout << "���� �Դϴ�" << endl;

	else
		cout << "0 �Դϴ�." << endl;

	cout << "���α׷��� �����մϴ�." << endl;


	return 0;
}