#include "circle.h"

Circle::Circle(int x, int y, int radius)
: Shape(x, y), radius_(radius) 
{}
double Circle::area() const
{
	return 3.141592 * radius_ * radius_;
}

double Circle::getCircumference() const
{
	return 3.141592 * (radius_ * 2);
}
