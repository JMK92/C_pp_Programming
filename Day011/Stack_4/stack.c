// 원하는 자료형 찍어내고 싶을 때 사용자 정의형 -> 구조체, class등.
#include"stack.h"
#include<stdio.h>
#include<stdlib.h>
#include <assert.h>

void initStack(Stack* ps, int size) {
	ps->pArr = malloc(size * sizeof(int)); // malloc은 동적할당 생성.
	assert(ps->pArr != NULL);   // 공간할당이 제대로 안됬다면     // c는 booltype이 없다.
	                            // assert - 참이면 진행, 거짓이면 중단
                	            // NULL - 아무것도 안 가짐
	ps->size = size;
	ps->tos = 0;
}

void cleanupStack(Stack*ps) {
	free(ps->pArr);             // malloc과 free랑 쌍으로 와야한다.
	                            // 동적 반환
}

void push(Stack* ps, int data) {
	
	assert(ps->tos != ps->size);// assert로 예외처리 참이면 계속 실행, 거짓 스탑
	//if (ps->tos == ps->size) {  // 꽉 찼을 경우
	//	printf("stack is full\n");
	//	exit(1);
	//}
	
	//(*ps).array[(*ps).tos] = data;
	//++(*ps).tos;
	ps->pArr[ps->tos] = data; // 배열 식 
	//*(ps->pArr = ps->tos)   // 포인터 식 둘이 결과는 같다.
	++ps->tos;
}

// return 0 -> 프로그램이 정상적으로 실행 되었습니다.뜻 0이 아니면 문제 있는 것.

int pop(Stack*ps) {

	assert(ps->tos != 0);
	//if (ps->tos == 0) {   // 비어있을때
	//	printf("stack is empty\n");
	//	exit(2);
	//}
	/*--(*ps).tos;
	return (*ps).array[(*ps).tos];*/
	--ps->tos;
	return ps->pArr[ps->tos];
}
