#pragma once

#include "BasicShape.h"
#include <iostream>

using namespace std;

class Rectangle : public BasicShape
{
public:

	Rectangle(double l, double w, string n = "Rectangle");

	void setLength(double x)
	{
		length = x;
	}

	void setWidth(double x)
	{
		width = x;
	}

	double returnLength()
	{
		return length;
	}

	double returnWidth()
	{
		return width;
	}

	virtual void calcArea();

private:

	double length;

	double width;

};

