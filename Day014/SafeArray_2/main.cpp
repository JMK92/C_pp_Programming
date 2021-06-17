#include <iostream>
#include "SafeArray_2.h"
#include"InvalidIndex.h"

int main() {

	int nums[] = { 1, 2, 3, 4, 5 };
	Array arr1(nums, 5);

	SafeArray arr2(nums, 5);
	
	/*arr1[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr1[i];
		std::cout << ((i < arr1.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;*/

	

	//arr2[5] = 6;
	/*for (int i = 0; i != arr1.size(); ++i) {
		std::cout << arr2[i];
		std::cout << ((i < arr2.size() - 1) ? ", " : "");
	}
	std::cout << std::endl;*/

	Array* pArr = &arr1;   // poly 사용 -> - 함수 인자전달할 때, 리턴시킬 때 쓰임
	//pArr = &arr2;

	//(*pArr)[5] = 6;       // (*pArr).operator[](5);  pArr->operator[](5);  3개다 같은거

	pArr = new SafeArray(arr2);    // SafeArray 복사생성자 호출
		
	try {                 // 발생할만 한 코드를 묶어준다.
		(*pArr)[5] = 6;
	}
	catch (InvalidIndex &e) {
		std::cerr << "index boundary exception error code : " << e.invalid() << std::endl;

	}

	delete pArr;   // 클래스 안에 virtual 안에 있으면 소멸자는 무조건 virtual이 된다.
				   // 소멸ㅁㄴ자에 둘다 버츄얼 안붙어있으면 객체는 자식이지만 부모 소멸자가 호출
				   // 자식꺼ㅇ 실행시키려면 부모소멸자에 버츄얼 붙여줘야함		
	return 0;
}