#ifndef STACK_H
#define STACK_H

//struct Stack {
class Stack {
private:
	int* pArr;
	int size;
	int tos;

public:
	Stack(int size);    // 持失切
	~Stack();           // 社瑚切
	//void initStack(int size); -> 企重 持失切 持失
	//void cleanupStack();      -> 企重 社瑚切 持失

	void push(int data);
	int pop();
};
#endif 