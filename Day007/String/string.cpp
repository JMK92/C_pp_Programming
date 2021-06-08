/*
	string ���� �Լ�
*/

#include<iostream>
#include<string>
using namespace std;

//int main() {
//	string s1, s2, s3;
//
//	s1.assign("ABCDEFG"); // assign : �Ҵ�
//	s2.assign(3, 'a'); // (����, ����) - ���ڸ� ������ŭ �Ҵ� (a ���ڸ� 3�� �Ҵ�)
//	s3.assign(s1, 2, 4); // (���ڿ�, ������ġ, ����)
//
//	cout << s1 << " : " << s2 << " : " << s3 << endl;
//
//
//	return 0;
//}

int main() {
	string s1, s2, s3;

	s1.append("abcdefg");
	s1.append(3, 'a');   // abcdefgaaa
	s2 = "S2";
	s2.append(s1, 2, 4); // S2cdef

	/*
		���ڿ�.clear() : ���ڿ��� ������ ��� ����
		���ڿ�1.compare(���ڿ�2) : 0(��ġ), 1(���ڿ�1 ���� �ڿ� ����), -1
		���ڿ�.empty() : ���ڿ��� ����ִ��� true or false
		���ڿ�.erase(������ġ, ����) : ������ġ���� ������ŭ �����.
	*/
	//s2.empty();
	s1.assign("ABCDEF");
	s2 = "B";
	s3 = "EF";

	/*
		.find() : Ư�� ���ڿ��� ã��, �� ������ġ�� ��ȯ
	*/
	int location = s1.find(s2); // s1���ڿ����� s2�� ã�´� ��ȯ : 1
	int location = s1.find(s3); // 4

	/*
		���ڿ�.replace(������ġ, ����, ���ڿ�) : ���ڿ��� ��ü
	*/
	string s = "ABC_DEF";
	s.replace(4, 3, "XYZ");  //ABC_XYZ

	/*
		���ڿ�.insert(������ġ, ���ڿ�) : ������ġ�� ���ڿ��� ����
	*/
	s = "ABCDEF";
	s.insert(3, "__"); //ABC__DEF

	/*
		���ڿ�.pop_back : ���ڿ��� ���� �ڿ� ���� �ϳ��� ��
		���ڿ�.push_back : ���ڿ��� �ڿ� ���ڸ� �߰�
	*/
	s = "ABCDEFG";
	s.pop_back(); // ABCDEF
	s.push_back('X'); // ABCDEFX

	/*
		���ڿ�.substr(������ġ, ����) : ���ڿ��� �Ϻκ� ����
	*/
	s = "ABCDEFG";
	string a = s.substr(4); // EF
	string b = s.substr(1, 3); // BCD

	/*
		���ڿ�1.swap(���ڿ�2) : ���ڿ�1�� ���ڿ�2�� ���� �ٲ۴�.
	*/
	s1 = "ABC";
	s2 = "XYZ";
	s1.swap(s2); // s1 ="XYZ", s2 ="ABC"

	/*
		���ڿ�.c_str() : string ���ڿ��� char*������ �ٲ㼭 ��ȯ
	*/
	s = "ABC";
	int length = strlen(s.c_str()); // 3 -> 3���� ���ڷ� �̷�� ���ٴ� �ǹ�

	/*
		���ڿ�.front() : ���ڿ��� ù��° ���� ��ȯ
		���ڿ�.back()  : ���ڿ��� ������ ���� ��ȯ
	*/
	s = "ABC";
	s.front(); // A
	s.back();  // C



	return 0;
}