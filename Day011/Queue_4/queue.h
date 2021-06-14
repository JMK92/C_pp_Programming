#ifndef QUEUE_H
#define QUEUE_H
//#define QUEUE_SIZE 100


typedef struct {
	//int array[QUEUE_SIZE];
	int* pArr;
	int size;
	int front;
	int rear;
} Queue;

void initQueue(Queue* pq, int size);
void cleanup(Queue* pq);
void push(Queue* s, int data);
int pop(Queue* s);


#endif 

