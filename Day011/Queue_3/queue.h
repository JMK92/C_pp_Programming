#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

//#pragma once -> ������

typedef struct {
	int array[QUEUE_SIZE];
	int front;
	int rear;
} Queue;

// C�� class ������ ����� ��.
//void push(struct stack s, int data); // typedef ���־ �Ʒ�ó�� ���.
void push(Queue* s, int data);
int pop(Queue* s);


#endif 
