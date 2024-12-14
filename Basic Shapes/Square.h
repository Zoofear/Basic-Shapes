#pragma once

#include "Rectangle.h"
#include <iostream>

using namespace std;

class Square : public Rectangle
{
public:

	Square(double s, string n = "Square") :Rectangle(s, s, n = "Square")
	{
		BasicShape::setName(n);
	}

	void setSide(double x)
	{
		side = x;
	}

	double returnSide()
	{
		return side;
	}

private:

	double side;

};

