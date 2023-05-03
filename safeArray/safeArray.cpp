#include <cassert>
#include "safeArray.h"
#include "array.h"
//const int SafeArray::SAFEARRAY_SIZE = 100;

SafeArray::SafeArray(int size)
: Array(size)
{
	
}
SafeArray::SafeArray(const int *pNum, int size)
: Array(pNum, size)
{
	
}
/*SafeArray::SafeArray(const SafeArray& rhs)
: Array((Array)rhs)			///slicing
{

}
SafeArray::~SafeArray()
{

}
SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
	this->Array::operator=((Array)rhs);
	return *this;
}*/

bool SafeArray::operator==(const SafeArray& rhs) const
{
	return this->Array::operator==( (Array)rhs);
	
	// return (Array)*this == (Array)rhs;'
}

int& SafeArray::operator[](int index)
{
	assert(index >= 0 && index < this->Array::size_);
	return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
	assert(index >= 0 && index < this ->Array::size_);
	return this->Array::operator[](index);
}

