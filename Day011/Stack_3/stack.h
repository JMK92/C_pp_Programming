#ifndef STACK_H
#define STACK_H
#define STACK_SIZE 100

//#pragma once -> 윈도우

typedef struct{
	int array[STACK_SIZE];
	int tos;
} Stack;

// C는 class 선언을 해줘야 함.
//void push(struct stack s, int data); // typedef 해주어서 아래처럼 사용.
void push(Stack* s, int data);
int pop(Stack* s);

#endif 