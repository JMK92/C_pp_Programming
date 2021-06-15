#include<stdio.h>
#include"stack.h"

int main(void) {
	Stack s1, s2; // ���������� �ʱ�ȭ �ؾ���
	              // �迭�� �ʱ�ȭ �����൵ ��
	              // tos ���� �ʱ�ȭ ����� ��.
	initStack(&s1, 10);
	initStack(&s2, 100);
	
	/*for (int i = 0; i < 100; ++i)
		s1.array[i] = 0; */     // �迭 �ʱ�ȭ
	s1.tos = 0;

	/*for (int i = 0; i < 100; ++i)
		s2.array[i] = 0; */     // �迭 �ʱ�ȭ
	s2.tos = 0;
	
	push(&s1, 700); // s1�� �ٲ�°� �ƴ϶� s1�Ǻ��纻�� �ٲ��.
	               // ->pointer�� �������ֱ� 
	push(&s1, 600);
	push(&s1, 400);

	printf("s1 1st pop() : %d\n", pop(&s1));
	printf("s1 2nd pop() : %d\n", pop(&s1));
	printf("s1 3rd pop() : %d\n", pop(&s1));

	push(&s2, 100);
	push(&s2, 200);
	push(&s2, 300);

	printf("s2 1st pop() : %d\n", pop(&s2));
	printf("s2 2nd pop() : %d\n", pop(&s2));
	printf("s2 3rd pop() : %d\n", pop(&s2));

	//pop(&s2);

	cleanupStack(&s1);
	cleanupStack(&s2);
	return 0;
}