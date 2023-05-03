#include <cassert>
#include "stack.h"
#include "array.h"


void Stack::push(int data)
{
	assert(!isFull());
	arr_[tos_] = data;
	++tos_;
}

int Stack::pop()
{
	assert(!isEmpty());
	--tos_;
	return arr_[tos_];
}

Stack::Stack(int size)
: arr_(size), tos_(0)
{


}
/*
Stack::~Stack() 
{
	
}
*/
bool Stack::isFull() const
{
	return tos_ == arr_.size();
}

bool Stack::isEmpty() const
{
	return tos_ == 0;
}

