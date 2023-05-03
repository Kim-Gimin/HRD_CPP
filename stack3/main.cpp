#include <iostream>
#include "stack.h"

const int Stack::STACK_SIZE = 100;

int main()
{
	Stack s1(100);
	Stack s2;
	// Stack s; =(100), Stack s1 = 100; X, Stack s1 = s2 X, s1 = s2 X
	
	s1.push(100);
	s1.push(200);
	s1.push(300);
	

	std::cout << "s1 1st pop() : " << s1.pop() << std::endl;
	std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
	std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;
	
	s2.push(900);
	s2.push(800);
	s2.push(700);

	for (int i = 1; i <= 3 ; ++i){
		if (!s2.isFull()) {
			s2.push(i);
			}
		}
	while (1) {
		if (s2.isEmpty()) {
			break;
			}
		std::cout << "s2 pop () : " << s2.pop() << std::endl;
		}
	return 0;
}
