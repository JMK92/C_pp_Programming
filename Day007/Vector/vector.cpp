/*
	vector : 가변 크기 배열(크기가 정해지지X)
*/

#include<iostream>
#include<vector>
//#include<algorithm> // 모든 알고리즘을 사용하고 싶을때 사용
using namespace std;

/*
	push-back(요소) : 마지막에 추가
	at(인덱스) : 추출, 참조
	begin() : 컨테이너의 시작위치
	end() : 컨테이너의 마지막위치
	empty() : 벡터가 비어있는지를 판단( bool값으로 리턴 true/false )
	erase(iterator it) : it가 가르키는 원소 삭제
	insert(iterator it, element) : iterator it(포인터)에 element(요소)를 삽입
	size() : 원소의 개수
*/
int main() {
	vector<int> v; // 정수벡터 생성

	// 원소 삽입
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);  // 1, 2, 3

	// 원소 개수와 용량
	int s = v.size();   // 실제 크기 3
	int c = v.capacity(); // default 10 (자료형에 따라 크기가 달라진다) - 최대크기

	// 원소 접근
	v.at(2) = 5; // vector 2번째 공간에 5를 삽입. // 1, 2, 5
	int num = v.at(1); // num = 2
	v[0] = 10;  // 10, 2, 5
	int num2 = v[2]; // num2 = 5

	// 벡터의 요소 출력
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	cout << endl;

	return 0;
}