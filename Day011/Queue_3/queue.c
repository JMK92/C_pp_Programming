#include"queue.h"
#include<stdio.h>
#include<stdlib.h>

void initQueue(Queue* pq) {
	pq->front = 0;
	pq->rear = 0;
}

void push(Queue* pq, int data) {

	if (pq->rear == QUEUE_SIZE) {  // ²Ë Ã¡À» °æ¿ì
		printf("stack is full\n");
		exit(1);
	}
	pq->array[pq->rear] = data;
	pq->rear++;
}

int pop(Queue* pq) {

	if (pq->front == QUEUE_SIZE) {   // ºñ¾îÀÖÀ»¶§
		printf("queue is empty\n");
		exit(2);
	}
	

	return pq->array[pq->front++];
}
