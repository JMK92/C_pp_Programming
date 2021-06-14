// ���ϴ� �ڷ��� ���� ���� �� ����� ������ -> ����ü, class��.
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>
#include <assert.h>

void initStack(Stack* ps, int size) {
	ps->pArr = malloc(size * sizeof(int)); // malloc�� �����Ҵ� ����.
	assert(ps->pArr != NULL);   // �����Ҵ��� ����� �ȉ�ٸ�     // c�� booltype�� ����.
	                            // assert - ���̸� ����, �����̸� �ߴ�
                	            // NULL - �ƹ��͵� �� ����
	ps->size = size;
	ps->tos = 0;
}

void cleanupStack(Stack*ps) {
	free(ps->pArr);             // malloc�� free�� ������ �;��Ѵ�.
	                            // ���� ��ȯ
}

void push(Stack* ps, int data) {
	
	assert(ps->tos != ps->size);// assert�� ����ó�� ���̸� ��� ����, ���� ��ž
	//if (ps->tos == ps->size) {  // �� á�� ���
	//	printf("stack is full\n");
	//	exit(1);
	//}
	
	//(*ps).array[(*ps).tos] = data;
	//++(*ps).tos;
	ps->pArr[ps->tos] = data; // �迭 �� 
	//*(ps->pArr = ps->tos)   // ������ �� ���� ����� ����.
	++ps->tos;
}

// return 0 -> ���α׷��� ���������� ���� �Ǿ����ϴ�.�� 0�� �ƴϸ� ���� �ִ� ��.

int pop(Stack*ps) {

	assert(ps->tos != 0);
	//if (ps->tos == 0) {   // ���������
	//	printf("stack is empty\n");
	//	exit(2);
	//}
	/*--(*ps).tos;
	return (*ps).array[(*ps).tos];*/
	--ps->tos;
	return ps->pArr[ps->tos];
}
