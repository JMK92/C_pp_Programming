/*
	C++ ���ڿ�
	- C-��Ʈ�� : C���� ���ڿ��� ǥ���ϴ� ���
	  �迭(array) : ������ �ڷ����� �ϳ��� �̸����� ��� �����ϴ� �ڷ�
	  'K', 'O', 'R', 'E', 'A'
	- string Ŭ���� : C++���� ���ڿ��� ó���ϴ� ���, ����

*/

#include<iostream>
#include<string> //-> C++ ��Ÿ��, #include<string.h> -> C��� ��Ÿ��, C++���� C��� ��Ÿ�� string ������ #include<cstring>
/* strlen, strcmp(�ΰ� ���� ��), strcpy(�ΰ����� copy), ..... */
using namespace std;

int main() {
	//char a, b, c, d, e;
	//// �迭
	//char arr[5] = {'K', 'O', 'R', 'E', 'A'}; // arr[�迭ũ��] = {�ʱ�ȭ}
	//char arr[] = "KOREA"; // null string '\0' => 6�� ���� ���� -> �������� null string�� ��� ���� ( ���ڿ��� ���̴� )
	//                     // string �������� �ϳ��� �ؼ� ���� korea - 5������ string�� 6���� ����.
	
	//char name[12]; // ����ũ�� ���� 12 -> ������ - 11, �ѱ� - 5���� + null string
	string names;  // (����)

	cout << "�̸� = "; 
	// getline() -> �ٴ����� �о�´�. ( ������ �а� ���� �� ��� )
	//cin >> names; // ������ ������� �ʴ´�. -> ������ ���������� ó��
	//cin.getline(name, 12, '\n'); // (������, byte, ������) -> �����ڴ� �������� => ������ ��� ==> string�϶��� ���X
	getline(cin, names);// (�Է�, ������ ��) -> string�϶� ������ ���
	

	cout << "����� �̸��� " << names << "�Դϴ�.\n";

	return 0;
}