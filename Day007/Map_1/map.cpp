/*
	map �����̳�
	- Ű�� ���� ���� ���ҷ� �����ϴ� �����̳�
	- Ű�� �ߺ��� ������� �ʴ´�.
*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, string> dic;   // �Է°�, ��°�

	// ��� ����
	dic.insert(make_pair("love", "���")); // love : Ű, ��� : ��
	dic.insert(make_pair("dream", "��"));
	dic.insert(make_pair("dog", "������"));
	dic["cherry"] = "ü��";
	dic["cat"] = "������"; 
	
	/*
	string kor1 = dic["dog"];
	string kor2 = dic.at("dream");

	cout << kor1 << ", " << kor2 << endl;*/

	cout << "����� �ܾ� ���� : " << dic.size() << endl;

	// Ű�� �Է¹޾� �ش� ���� ����ϴ� ����
	string eng;

	while (true) {
		cout << "ã�� �ܾ� = ";
		//cin >> eng;
		getline(cin, eng);   // ������ �����ص� ��.
		if (eng == "exit") break;

		/*
			find(key_type & key) : iterator ����
			�ʿ��� 'Ű'�� �ش��ϴ� ���Ҹ� ����Ű�� �ݺ��ڸ� ����
		*/
		if (dic.find(eng) == dic.end())  // eng�� dict ������ �˻��ߴٸ�
			cout << eng << "�� ������ �����" << endl;
		else
			cout << dic[eng] << endl;
	}

	return 0;
}