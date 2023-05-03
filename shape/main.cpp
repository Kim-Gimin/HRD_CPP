#include <typeinfo>
#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

void printArea(const Shape *ps)
{	//RTTI(RunTime Type Identification)
	if (typeid(*ps) == typeid(Rectangle)) {
		std::cout << "rectangle area : "<< ps->area() << std::endl;
		std::cout << "diagonal : " << ((Rectangle *)ps)->getDiagonal() << std::endl;
	}
	else if (typeid(*ps) == typeid(Circle)) {
		std::cout << "circle area : " << ps->area() << std::endl;
		std::cout <<"Circumference : " <<((Circle *)ps)->getCircumference() << std::endl;
	}
	else {
	
	}
	

}

int main()
{
	Shape *ps;
	Shape *shapes[5];
	shapes[0] = new Rectangle(0, 0, 100, 50);
	shapes[1] = new Rectangle(50, 50, 10, 20);
	shapes[2] = new Circle(100, 100, 10);
	shapes[3] = new Rectangle(100, 200, 5, 20);
	shapes[4] = new Circle(200, 200, 50);
	
	for (int i = 0; i < 5; ++i) {
		printArea(shapes[i]);
	}
	
	
	for (int i = 0; i < 5; ++i) {
		delete shapes[i];
	}

	return 0;
}
