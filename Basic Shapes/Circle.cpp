#include "Circle.h"

using namespace std;

Circle::Circle(double x, double y, double r, string n)
{
	setxCenter(x);

	setyCenter(y);

	setRadius(r);

	BasicShape::setName(n);

	BasicShape::calcArea;
}

