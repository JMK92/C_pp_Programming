/*
	
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	const char* first = "D:/C++_programming/source/student.txt";
	const char* second = "C:/Windows/system.ini";

	// step 1, step 2
	fstream fout(first, ios::out | ios::app);
	if (!fout) {
		cout << first << "열기 실패\n";
		return 0;
	}
	fstream fin(second, ios::in);
	if (!fin) {
		cout << second << "열기 실패\n";
		return 0;
	}

	// step 3. 
	int ch;
	while ((ch = fin.get()) != EOF) {
		fout.put(ch);
	}

	// step 4.
	fin.close();
	fout.close();

	return 0;
}