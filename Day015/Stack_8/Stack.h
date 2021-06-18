#ifndef STACK_H
#define STACK_H
#include "SafeArray_2.h"

template<typename T>
class Stack {
public:
	explicit Stack(int size = STACK_SIZE);
	
	bool full() const;
	bool empty() const;

	void push(const T& data);    // const T& => class type 객체가 들어올수 있다.
	                             // value로 넘기면 생성자 소멸자 호출이 된다.
	const T& pop();

private:
	static const int STACK_SIZE;

	SafeArray<T> arr_;					// 'has-a'
	int tos_;

	Stack(const Stack<T>& rhs);				// 컴파일러가 자동적으로 만들어주는 함수
	Stack<T>& operator=(const Stack<T>& rhs);		// 메인에서 사용못하도록 private에 만들어줌 -> Stack s3=s2, s1=s2 안됨
};

template<typename T>
const int Stack<T>::STACK_SIZE = 100;

template<typename T>
Stack<T>::Stack(int size) : arr_(size), tos_(0) { }

// Stack::~Stack() { }

template<typename T>
bool Stack<T>::full() const {
	return tos_ == Stack::STACK_SIZE;
}

template<typename T>
bool Stack<T>::empty() const {
	return tos_ == 0;
}

template<typename T>
void Stack<T>::push(const T& data) {
	arr_[tos_] = data;
	++tos_;
}

template<typename T>
const T& Stack<T>::pop() {
	--tos_;
	return arr_[tos_];
}


#endif
