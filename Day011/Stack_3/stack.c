// 원하는 자료형 찍어내고 싶을 때 사용자 정의형 -> 구조체, class등.
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

void initStack(Stack* ps, int size) {
	ps->tos = 0;
}

void push(Stack* ps, int data) {
	
	if (ps->tos == STACK_SIZE) {  // 꽉 찼을 경우
		printf("stack is full\n");
		exit(1);
	}
	
	//(*ps).array[(*ps).tos] = data;
	//++(*ps).tos;
	ps->array[ps->tos] = data; // 구조체 자료 포인터
	++ps->tos;
}

// return 0 -> 프로그램이 정상적으로 실행 되었습니다.뜻 0이 아니면 문제 있는 것.

int pop(Stack*ps) {

	if (ps->tos == 0) {   // 비어있을때
		printf("stack is empty\n");
		exit(2);
	}
	/*--(*ps).tos;
	return (*ps).array[(*ps).tos];*/
	--ps->tos;
	return ps->array[ps->tos];
}



//int stack1[100];
//int tos1;
//
//int stack2[100];
//int tos2;
//
//struct stack {
//	int array[100];
//	int tos;
//
//};
//
//struct stack s1, s2;
//struct stack stacks[100];

