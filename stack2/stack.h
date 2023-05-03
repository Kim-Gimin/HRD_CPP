#ifndef STACK_H
#define STACK_H



class Stack {
private:
	static const int STACK_SIZE;
	int *pArr_;
	int size_;
	int tos_;
	Stack(const Stack& rhs);
	Stack& operator=(const Stack& rhs);
public:	
	explicit Stack(int size = Stack::STACK_SIZE); // 생성자 constructor, Stack s = 100 X
	~Stack(); // 소멸자 destructor
	
	void push(int data);
	int pop();
	
	bool isFull() const;
	bool isEmpty() const;
	
	
};






#endif

