
#include"stack.h"
//#include<stdio.h>
//#include<cstdio>   
//#include<stdlib.h> -> malloc/free 사용
//#include <assert.h>
#include <cassert>

//void Stack::initStack(int size) {
//	//this->pArr = (int *)malloc(size * sizeof(int)); 
//	this->pArr = new int[size];
//	assert(this->pArr != NULL);   
//	                                          	           
//	this->size = size;
//	this->tos = 0;
//}

Stack::Stack(int size){
	this->pArr = new int[size];
	assert(this->pArr != NULL);   
		                                          	           
	this->size = size;
	this->tos = 0;
}
Stack::~Stack() {
	
	delete[] this->pArr;
}

//void Stack::cleanupStack() {
//	//free(this->pArr);
//	delete[] this->pArr;
//	                          
//}

void Stack::push(int data) {
	
	assert(this->tos != this->size);
	this->pArr[this->tos] = data; // 배열 식 
	
	++this->tos;
}

int Stack::pop() {

	assert(this->tos != 0);
	
	--this->tos;
	return this->pArr[this->tos];
}
