#pragma once
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class Point
{
	double x_coordinate, y_coordinate;

public:
	
	Point() : x_coordinate(0), y_coordinate(0) {};
	
	Point(double, double);
	
	virtual ~Point() {}

	double GetX();
	
	double GetY();
	
	void GetCoordinates();
	
	friend double Distance(Point*, Point*);
};