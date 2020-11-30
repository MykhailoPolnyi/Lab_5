#pragma once
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;



class Point
{
	double x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(double OX, double  OY)
	{
		x = OX;
		this->y = OY;
	}
	virtual ~Point() {}

	double GetX();
	double GetY();
	void GetCoord();
	friend double Dist(Point*, Point*);
};

enum class Color { Black, Red, Green, Blue, White, Violet, Orange, Yellow};

class Polynom
{
	
	vector<Point> figure;
	double per, l_d;
	Color col;
public:
	Polynom()
	{
		per = 0;
		l_d = 0;
		col = Color(0);
	}
	Polynom(int point_num)
	{
		for (int i = 0; i < point_num; i++)
		{
			figure.push_back(Point((3 * sin(i)), (-4 * i)));
		}
		per = 0;
		l_d = 0;
		col = Color(0);
	}
	~Polynom() {};
	//
	void SetColor(int i);
	double GetMax_Diag();
	double GetPer();
	void GetPolynom();

	//
	friend double Dist(Polynom* P, int a, int b);
	friend void Sort_Pol_X(Polynom*);
	friend void Sort_Pol_Y(Polynom*);
	//
	void Max_Diag();
	void Perym();
};

