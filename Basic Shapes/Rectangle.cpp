#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, string n = "Rectangle")
{
	setLength(l);

	setWidth(w);

	BasicShape::setName(n);

	BasicShape::calcArea();

}

void Rectangle::calcArea()
{
	double rectanglearea;

	rectanglearea = length * width;

	BasicShape::setArea(rectanglearea);
}