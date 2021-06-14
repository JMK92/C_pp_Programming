// ���ϴ� �ڷ��� ���� ���� �� ����� ������ -> ����ü, class��.
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>

void initStack(Stack* ps, int size) {
	ps->tos = 0;
}

void push(Stack* ps, int data) {
	
	if (ps->tos == STACK_SIZE) {  // �� á�� ���
		printf("stack is full\n");
		exit(1);
	}
	
	//(*ps).array[(*ps).tos] = data;
	//++(*ps).tos;
	ps->array[ps->tos] = data; // ����ü �ڷ� ������
	++ps->tos;
}

// return 0 -> ���α׷��� ���������� ���� �Ǿ����ϴ�.�� 0�� �ƴϸ� ���� �ִ� ��.

int pop(Stack*ps) {

	if (ps->tos == 0) {   // ���������
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

