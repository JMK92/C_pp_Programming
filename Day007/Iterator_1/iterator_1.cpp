/*
	Iterator
	- 반복자
	- 컨테이너의 원소를 가리키는 포인터
	- 변수 선언
	  구체적인 컨테이너를 지정하여 반복자 생성
	  vector<int>::iterator it; - int타입을 가진 vector꺼에 포인터변수 it
	  it = v.begin() -> 해당 vector의 시작값 주소를 가리킨다.
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	vector<int>::iterator it; // 포인터 변수 (container에 접근하는 정수형 포인터)
	it = v.begin();        // it 주소는 vector의 시작 주소

	it++;   // it = it + 1
	int num =* it; // it 는 주소 일반변수 num에는 삽입X // 2

	num = num * 2;  // 4
	*it = num;    // 1, 4, 3, 4, 5

	it = v.erase(it); // 현재 it는 2번째에 있음. // 1, 3, 4, 5

	it = v.end(); // 뒤로 이동

	for (it = v.begin(); it != v.end(); it++) {  // 포인터 값 이동
		cout << *it << " ";
	}

	cout << endl;
	return 0;
}