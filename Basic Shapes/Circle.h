#pragma once

#include <iostream>
#include "BasicShape.h"

using namespace std;


class Circle : public BasicShape
{
public:

	Circle(double x, double y, double r, string n);

	void setxCenter(double x)
	{
		xCenter = x;
	}

	void setyCenter(double y)
	{
		yCenter = y;
	}

	void setRadius(double r)
	{
		radius = r;
	}
	



private:

	double xCenter;

	double yCenter;

	double radius;

};

