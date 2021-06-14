#include"queue.h"
#include<stdio.h>
#include<stdlib.h>

void initQueue(Queue* pq) {
	pq->front = 0;
	pq->rear = 0;
}

void push(Queue* pq, int data) {

	if (pq->rear == QUEUE_SIZE) {  // �� á�� ���
		printf("stack is full\n");
		exit(1);
	}
	pq->array[pq->rear] = data;
	pq->rear++;
}

int pop(Queue* pq) {

	if (pq->front == QUEUE_SIZE) {   // ���������
		printf("queue is empty\n");
		exit(2);
	}
	

	return pq->array[pq->front++];
}
