/*
	�ټ����� �̸��� �Է¹޾� ���Ϳ� ������ �� �������� ���� �ڼ��� �ش��ϴ� ����� �̸��� ����Ͻÿ�.
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	// ���ڿ� vector ����
	vector<string> sv;
	string name;

	cout << "�ټ����� �̸��� �Է��ϼ���." << endl;
	for (int i = 0; i < 5; i++){
		cout << i + 1 << "��° �̸� = ";
		//cin >> name;    // 
		getline(cin, name, '\n'); // enter�� ġ�� �����ɷ� ����
		sv.push_back(name);
	}

	// ó�� - �������� ���� �������� ������ �̸�
	name = sv.at(0);  // ������ ù��° ��
	for (int i = 1; i < sv.size(); i++) {  // 0��°�� name���� �Ǿ� ����
		if (name < sv[i])
			name = sv[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸� : " << name << endl;
	return 0;
}