/*
	C++ ���� �����(File I/O)
	- ����(file)    : ������������ ó�� ����
	- �ؽ�Ʈ ����   : ���ڸ����� ������ ����, txt, html, xml, c/c++, java
	- ���̳ʸ� ���� : ����, �׸�, ǥ, ����, ������� - �ؽ�Ʈ ���� �̿� ��� ���� ���̳ʸ� ����
	                  hwp, doc, ppt, jpeg, bmp, mp3, mp4.....
	- ���� ����� ���̺귯��
	  fstream : iostream
	  ifstream : istream, �б�
	  ofstream : ostream, ���

	- ��������� ���
	  step 1. ���ϰ�ü ����
	  step 2. ���Ͽ���
	  step 3. �۾�
	  step 4. ���ϴݱ�
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	// step 1. ���ϰ�ü ����
	ofstream fout;

	// step 2. ���Ͽ���
	// open(���ϸ�, mode)
	// mode : r(read), w(write), a(append), rb, wb, ab - b : ���̳ʸ� (���̳ʸ� ���� ó��)
	fout.open("song.txt");   // ��� ��ü�� ������ �ͼ� w�� �Ƚᵵ �ȴ�.
	if (!fout) { // ���� ������ ��� ( ������ ���� ��� )
		cout << "song.txt ������ ���� ���߽��ϴ�.\n";
		return 0;
	}
	// step 3. �۾�
	int age = 21;
	char singer[] = "kim";
	char song[] = "Yesterday";

	fout << age << '\n';
	fout << singer << endl;
	fout << song << endl;

	// step 4. ���ϴݱ�
	fout.close();

	return 0;
}