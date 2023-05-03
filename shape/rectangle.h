#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape {
private:
	int width_;
	int height_;
public:
	Rectangle(int x, int y, int width, int height);
	
	virtual double area() const;
	double getDiagonal() const;
};


#endif
