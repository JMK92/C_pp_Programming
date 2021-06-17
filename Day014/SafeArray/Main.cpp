#include <iostream>
#include "SafeArray.h"

int main() {

	int nums[] = { 1, 2, 3, 4, 5 };
	Array arr1(nums, 5);

	SafeArray arr2(nums, 5);

	arr1[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr1[i];
		std::cout << ((i < arr1.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;



	arr2[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr2[i];
		std::cout << ((i < arr2.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;
	 
	Array* pArr = &arr1;   // poly ��� -> - �Լ� ���������� ��, ���Ͻ�ų �� ����
	//pArr = &arr2;
	
	//(*pArr)[5] = 6;       // (*pArr).operator[](5);  pArr->operator[](5);  3���� ������

	pArr = new SafeArray(arr2);    // SafeArray ��������� ȣ��
	
	(*pArr)[5] = 6;            
	 
	delete pArr;   // Ŭ���� �ȿ� virtual �ȿ� ������ �Ҹ��ڴ� ������ virtual�� �ȴ�.
	               // �Ҹ��ڿ� �Ѵ� ����� �Ⱥپ������� ��ü�� �ڽ������� �θ� �Ҹ��ڰ� ȣ��
	               // �ڽĲ� �����Ű���� �θ�Ҹ��ڿ� ����� �ٿ������		
	return 0;
}