#ifndef SHAPE_H
#define SHAPE_H

class Shape {	//ABC(Abstract Base Class)
protected:
	int x_;
	int y_;
public:
	Shape(int x = 0, int y = 0);
	virtual ~Shape() {};
	void move(int offsetX, int offsetY);
	virtual double area() const = 0;  //pure virtual func.
	
};
#endif
