/*
	형변화(casting) : 자료의 형을 변환하는 작업
	
	- 자동형변환(묵시적형변환, promotion)
	  : 큰 공간에 작은 데이터를 담는 행위
	  : 데이터의 손실이 발생하지 않는다.
	
	- 강제형변환(명시적형변환, casting)
	  : 작은 공간에 큰 데이터를 담는 행위
	  : 데이터의 손실이 발생한다.

	- 자료형의 크기
	bool(1) < char(1) < short(2) < int(4) < long(4) < longlong(8) < float(4) < double(8 byte) 
	1B        1B        2B         4B       4B        8B            4B         8B
	          
*/

#include<iostream>
using namespace std;

int main() {
	char a = 100;
	char b = 'A';
	int c = 100;
	long d = 100L;  // long형 상수
	float e = 3.14f;  // f 안붙이면 원래는 error
	double f = 3.14;

	a = (char)d;    // 큰공간에서 작은 공간으로 보내니깐 -> casting이 필요 -> 이방식(권장)
	c = int(f);     // 이렇게 해도 된다. 

	return 0;

}