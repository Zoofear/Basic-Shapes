#pragma once

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include "BasicShape.h"

using namespace std;


class Circle : public BasicShape
{
public:

	Circle(double x, double y, double r, string n = "Circle");

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
	
	double returnxCenter()
	{
		return xCenter;
	}
	
	double returnyCenter()
	{
		return yCenter;
	}

	double returnRadius()
	{
		return radius;
	}

	virtual void calcArea();

private:

	double xCenter;

	double yCenter;

	double radius;

};

