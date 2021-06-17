#include<iostream>
#include"BoundArray.h"
#include"Array.h"
#include"InvalidIndex.h"
#include"SafeArray.h"

int main() {

	BoundArray arr(6, 10);

	for (int i = arr.lower(); i < arr.upper(); ++i)
		arr[i] = i;

	for (int i = arr.lower(); i < arr.upper(); ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}