#include <cassert>
#include "rational.h"

Rational::Rational(int num, int den)
{
	assert(den );
	this->num = num;
	this->den = den;
}
Rational::Rational(int num)
{
	this->num = num;
	this->den = 1;
}
Rational::Rational()
{
	this->num = 0;
	this->den = 1;
}

Rational::~Rational()
{

}

int Rational::getNum()
{
	return this->num;
}

int Rational::getDen()
{
	return this->den;
}

void Rational::setNum(int num)
{
	this->num = num;
}

void Rational::setDen(int den)
{
	assert(den );
	this->den = den;
}




