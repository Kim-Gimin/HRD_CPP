#include "shape.h"

Shape::Shape(int x, int y)
: x_(x), y_(y)
{}

void Shape::move(int offsetX, int offsetY)
{
	x_ = x_ + offsetX;
	y_=  y_ + offsetY;
}

/*double Shape::area() const
{

}*/
