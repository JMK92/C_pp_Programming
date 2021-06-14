#ifndef STACK_H
#define STACK_H
//#define STACK_SIZE 100

//#pragma once -> ������

typedef struct{
	//int array[STACK_SIZE];
	int* pArr;
	int size;
	int tos;
} Stack;

// C�� class ������ ����� ��.
//void push(struct stack s, int data); // typedef ���־ �Ʒ�ó�� ���.
void initStack(Stack* ps, int size);

void push(Stack* s, int data);
int pop(Stack* s);

#endif 