#include<iostream>
using namespace std;

class Sample {
	int num;
public:
	Sample(int n) : num(n){}
	Sample& AddNum(int n) {     // return ���� �ּ� -> *this
		num += n;  
		return* this;          // this ( �ڱ��ڽ�, ������ ) 
	}

	void showData() const {     // const -> const�� ���� ��ü�� ���� ����
		cout << "num = " << num << endl;  // ���� �ٲٴ� ��Ȱ�� �ƴұ� const�� ���̴� ��찡 ����.
	}
};

int main() {
	const Sample obj(7);      // num = 7, const Sample obj(7) = ���� �ٲ� �� ����.
	//obj.AddNum(20);     // num = 27
	obj.showData();

	return 0;
}

