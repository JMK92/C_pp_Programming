#include<stdio.h>  // <> ���̺귯���� ����
#include"stack.h"  // "" ���� ���丮 �ȿ� �ִ� ������� -> ���� �Ǿ� ����
                   // #include -> ctrl+c, ctrl+v
// C��� - ���̺귯���� ����


// main������ �Լ� ���� �Ǵ� ���� �־�� �Ѵ�.
int main(void) {   // ��°� : int, �Է°� : void
	push(100);
	push(200);
	push(300);

	printf("%d\n", pop());       // 300   last in first out
	printf("%d\n", pop());       // 200
	printf("%d\n", pop());       // 100
	// 
	return 0;
}

