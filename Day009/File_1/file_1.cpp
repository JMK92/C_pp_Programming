/*
	C++ 파일 입출력(File I/O)
	- 파일(file)    : 보조기억장소의 처리 단위
	- 텍스트 파일   : 문자만으로 구성된 파일, txt, html, xml, c/c++, java
	- 바이너리 파일 : 문자, 그림, 표, 사운드, 동영상등 - 텍스트 파일 이외 모든 것은 바이너리 파일
	                  hwp, doc, ppt, jpeg, bmp, mp3, mp4.....
	- 파일 입출력 라이브러리
	  fstream : iostream
	  ifstream : istream, 읽기
	  ofstream : ostream, 출력

	- 파일입출력 방법
	  step 1. 파일객체 생성
	  step 2. 파일열기
	  step 3. 작업
	  step 4. 파일닫기
*/

#include<iostream>
#include<fstream>  // ifstream or ofstream
using namespace std;

int main() {
	// step 1. 파일객체 생성
	ofstream fout;

	// step 2. 파일열기
	// open(파일명, mode)
	// mode : r(read), w(write), a(append), rb, wb, ab - b : 바이너리 (바이너리 형태 처리)
	fout.open("song.txt");   // 출력 객체를 가지고 와서 w를 안써도 된다.
	if (!fout) { // 열기 실패일 경우 ( 파일이 없을 경우 )
		cout << "song.txt 파일을 열지 못했습니다.\n";
		return 0;
	}
	// step 3. 작업
	int age = 21;
	char singer[] = "kim";
	char song[] = "Yesterday";

	fout << age << '\n';
	fout << singer << endl;
	fout << song << endl;

	// step 4. 파일닫기
	fout.close();

	return 0;
}