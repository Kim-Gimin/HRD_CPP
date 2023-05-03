#ifndef STACK_H
#define STACK_H
#include "array.h"

template <typename T>
class Stack {
private:
	static const int STACK_SIZE;
	//int *pArr_;
	//int size_;
	
	Array<T> arr_;		// 'has-a'
	int tos_;
	Stack(const Stack<T>& rhs);
	Stack<T>& operator=(const Stack<T>& rhs);
public:	
	explicit Stack(int size = Stack<T>::STACK_SIZE); // 생성자 constructor, Stack s = 100 X
	//~Stack(); // 소멸자 destructor
	
	void push(const T& );
	T pop();
	
	bool isFull() const;
	bool isEmpty() const;
	
	
};

#include <cassert>
template <typename T>
const int Stack<T>::STACK_SIZE = 100;
template <typename T>
void Stack<T>::push(const T& data)
{
	assert(!isFull());
	arr_[tos_] = data;
	++tos_;
}

template <typename T>
T Stack<T>::pop()
{
	assert(!isEmpty());
	--tos_;
	return arr_[tos_];
}
template <typename T>
Stack<T>::Stack(int size)
: arr_(size), tos_(0)
{


}
/*
template <typename T>
Stack<T>::~Stack() 
{
	
}
*/
template <typename T>
bool Stack<T>::isFull() const
{
	return tos_ == arr_.size();
}

template <typename T>
bool Stack<T>::isEmpty() const
{
	return tos_ == 0;
}





#endif

