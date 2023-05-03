#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape{
private:
	int radius_;
public:
	Circle(int x, int y, int radius);
	virtual double area() const; 
	double getCircumference() const;
};

#endif
