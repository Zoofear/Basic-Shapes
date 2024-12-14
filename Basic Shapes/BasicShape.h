#pragma once

#include <iostream>

using namespace std;

class BasicShape
{
public:

	BasicShape(double a = 1, string n = "name") : area(a), name(n) {}

	void setArea(double a)
	{
		area = a;
	}
	
	void setName(string n)
	{
		name = n;
	}

	double returnArea()
	{
		return area;
	}
	
	string returnName()
	{
		return name;
	}

	virtual void calcArea() = 0;

private:

	double area;

	string name;

};

