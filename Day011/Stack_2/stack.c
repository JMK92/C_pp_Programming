static int stack[100];
static int tos;       // 같은 .c 파일만 접근 가능 즉 stack.c에서만 접근 가능.

// 함수 정의
void push(int data) {
	stack[tos] = data;
	++tos;
}
int pop(void) {
	--tos;
	return stack[tos];
}