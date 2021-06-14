#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

//#pragma once -> 윈도우

typedef struct {
	int array[QUEUE_SIZE];
	int front;
	int rear;
} Queue;

// C는 class 선언을 해줘야 함.
//void push(struct stack s, int data); // typedef 해주어서 아래처럼 사용.
void push(Queue* s, int data);
int pop(Queue* s);


#endif 
