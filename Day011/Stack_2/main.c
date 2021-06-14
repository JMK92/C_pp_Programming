#include<stdio.h>  // <> 라이브러리가 제공
#include"stack.h"  // "" 같은 디렉토리 안에 있는 헤더파일 -> 선언만 되어 있음
                   // #include -> ctrl+c, ctrl+v
// C언어 - 라이브러리의 집합


// main위에는 함수 선언 또는 정의 있어야 한다.
int main(void) {   // 출력값 : int, 입력값 : void
	push(100);
	push(200);
	push(300);

	printf("%d\n", pop());       // 300   last in first out
	printf("%d\n", pop());       // 200
	printf("%d\n", pop());       // 100
	// 
	return 0;
}

