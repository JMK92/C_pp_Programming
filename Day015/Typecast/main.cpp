#include<iostream>

int main() {

	int kor = 90;
	int eng = 90;
	int mat = 91;

	double average = static_cast<double>(kor + eng + mat) / 3;

	std::cout << "average : " << average << std::endl;

	int width = 9;
	int height = 5;

	double area =static_cast<double>( width * height) / 2;

	int men = 10;
	int women = 1;

	double menRatio =static_cast<double>( men) / (men + women) * 100;
	double womenRatio = static_cast<double>(women) / (men + women) * 100;
	std::cout << "menRatio : " << menRatio << std::endl;
	std::cout << "womenRatio : " << womenRatio << std::endl;

	int a = 0x12345678;
	char* p;
	//p = static_cast<char*>(&a);  // error -> 강제 변환
	p = reinterpret_cast<char*>(&a);
	std::cout << "*p : 0x" << std::hex << static_cast<int>(*p) << std::endl;  // 리틀엔디안, 빅엔디안

	return 0;
}