#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

//#pragma once -> ������

typedef struct{
	int array[STACK_SIZE];
	int tos;
} Stack;

// C�� class ������ ����� ��.
//void push(struct stack s, int data); // typedef ���־ �Ʒ�ó�� ���.
void push(Stack* s, int data);
int pop(Stack* s);

#endif 