/*
	STL(Standard Template Library : 일반화 프로그래밍
	- 일반화 프로그래밍은 데이터를 중시하는 객체지향 프로그래밍과는
	  달리 프로그램의 알고리즘에 중점을 둔 기법
	- C++ 표준 템플릿 라이브러리
	  반복자(Iterator)
	  컨테이너(Container) : 같은 타입의 여러 객체를 저장
	                        클래스 템플릿(일반화)
	- 알고리즘(Algorithm) : 함수들

	- 컨테이너 : 순차(sequence) - 순서대로 데이터 정리, 연관(associative), 어댑터(adapter)

	- 순차 컨테이너 (순서대로 데이터 접근) : vector, list, deque(stack + queue)
	- 연관 컨테이너 : set, map(key와 value - python의 dict와 비슷)
	- 어댑터 컨테이너 : stack(LIFO), queue(FIFO) 
*/

#include<iostream>
#include<vector>   // vector 을 사용할려면 가져와야함.
using namespace std;

int main() {
	// 백터객체 생성 및 초기화
	vector<int> vc = { 10, 20, 30 };  // vector 사용하려면 어떤 타입을 사용할지 적어줘야함 -> vector도 템플릿이기때문에
	                                  // 초기화는 중괄호.
	cout << "현재 벡터의 크기 : " << vc.size() << endl;  // .size() -> 크기를 알수 있음.

	// 벡터 요소 추가
	vc.push_back(40);    // 집어넣어라 뒤에다가

	cout << "벡터의 네번째 요소 : " << vc[3] << endl; // vector도 배열(동적배열)이여서 배열처럼 접근 가능.

	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " ")); // ostream_iterator(출력 반복자 int타입) cout(콘솔로) " " (한칸씩 띄어서)
	 
	return 0;
}