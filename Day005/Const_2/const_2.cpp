#include<iostream>
using namespace std;

class Sample {
	int num;
public:
	Sample(int n) : num(n){}
	Sample& AddNum(int n) {     // return 값이 주소 -> *this
		num += n;  
		return* this;          // this ( 자기자신, 포인터 ) 
	}

	void showData() const {     // const -> const로 만든 객체만 접근 가능
		cout << "num = " << num << endl;  // 값을 바꾸는 역활이 아닐깨 const를 붙이는 경우가 많다.
	}
};

int main() {
	const Sample obj(7);      // num = 7, const Sample obj(7) = 값을 바꿀 수 없다.
	//obj.AddNum(20);     // num = 27
	obj.showData();

	return 0;
}

