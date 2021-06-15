//#include<stdio.h>
//#include<cstdio>
#include<iostream>
#include"stack.h"
using namespace std;

int main() {
	Stack s1(10), s2(100);	

	//initStack(&s1, 10); -> C style
	//s1.initStack(10);  // -> C++ style 객체가 앞으로
	//s2.initStack(100); // -> 
	
	//  s1.tos = 0;   -> private 때문에 접근이 안됨.
	
	//push(&s1, 700); 
	//push(&s1, 600);
	//push(&s1, 400);

	s1.push(700);
	s1.push(600);
	s1.push(400);
		
	//printf("s1 1st pop() : %d\n", s1.pop());
	//printf("s1 2nd pop() : %d\n", s1.pop());
	//printf("s1 3rd pop() : %d\n", s1.pop());

	cout << "s1 1st pop() : " << s1.pop() << endl;
	cout << "s1 2nd pop() : " << s1.pop() << endl;
	cout << "s1 3rd pop() : " << s1.pop() << endl;

	//push(&s2, 100);
	//push(&s2, 200);
	//push(&s2, 300);

	s2.push(100);	
	s2.push(200);
	s2.push(300);

	/*printf("s2 1st pop() : %d\n", s2.pop());
	printf("s2 2nd pop() : %d\n", s2.pop());
	printf("s2 3rd pop() : %d\n", s2.pop());*/

	cout << "s2 1st pop() : " << s2.pop() << endl;
	cout << "s2 2nd pop() : " << s2.pop() << endl;
	cout << "s2 3rd pop() : " << s2.pop() << endl;

	//pop(&s2);

	/*cleanupStack(&s1);
	cleanupStack(&s2);*/

	//s1.cleanupStack();
	//s2.cleanupStack();
	// 소멸자 자동으로 호출
	return 0;
}