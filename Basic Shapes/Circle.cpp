#include "Circle.h"

using namespace std;

Circle::Circle(double x, double y, double r, string n = "Circle")
{
	setxCenter(x);

	setyCenter(y);

	setRadius(r);

	BasicShape::setName(n);

	BasicShape::calcArea;
}

void Circle::calcArea()
{
	double circlearea = 0;
	
	circlearea = M_PI * (sqrt(radius));
	
	BasicShape::setArea(circlearea);
}