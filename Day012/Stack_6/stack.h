#ifndef STACK_H
#define STACK_H

//struct Stack {
class Stack {
private:
	int* pArr;
	int size;
	int tos;

public:
	Stack(int size);    // ������
	~Stack();           // �Ҹ���
	//void initStack(int size); -> ��� ������ ����
	//void cleanupStack();      -> ��� �Ҹ��� ����

	void push(int data);
	int pop();
};
#endif 