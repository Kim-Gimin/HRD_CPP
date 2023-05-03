#include <cmath>
#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height)
: Shape(x, y), width_(width), height_(height) 
{}
	
double Rectangle::area() const
{
	return width_ * height_;
}

double Rectangle::getDiagonal() const
{
	return sqrt(width_ * width_ + height_ * height_);
}
