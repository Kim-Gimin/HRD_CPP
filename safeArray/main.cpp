#include <iostream>
#include "array.h"
#include "safeArray.h"

int main()
{
	SafeArray arr1; //  SafeArray arr1(100);
	SafeArray arr2(20); // SafeArray arr2 = 100 X
	int nums[] = {1, 2, 3, 4, 5};
	SafeArray arr3(nums, 5);
	SafeArray arr4 = arr3;
	
	arr1 = arr3;
	if (arr1 == arr3) {
		std::cout << "arr1 and arr3 are equal" << std::endl;
	} else {
		std::cout << "arr1 and arr3 are not equal"<< std::endl;
		}
	for (int i = 0; i < arr1.size(); ++i) {
		std::cout << arr1[i] << std::endl;
		}
	
	Array arr(5);
	arr[5] = 0;
	
	//Array *pArr = &arr1;
	Array *pArr = new SafeArray(nums, 5);
	(*pArr)[5] = 0;
	delete pArr; //(*pArr).SafeArray::~SafeArray() !!!!!!!!!!
	
	return 0;
}
