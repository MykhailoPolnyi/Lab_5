#pragma once
#include "Points.h"
class Polynom
{
	enum class Color { Black, Red, Green, Blue, White, Violet, Orange, Yellow };

	vector<Point> figure_points;

	double perimetr, longest_diagonal;

	Color color;

public:

	Polynom();

	Polynom(int);

	~Polynom() {};

	void SetColor(Color);

	double GetMaxDiagonal();

	double GetPerimeter();

	void GetPolynom();

	friend double Distance(Polynom*, int, int);

	friend void SortPolynomForX(Polynom*);

	friend void SortPolynomForY(Polynom*);

	void GetMaxDiagonal();

	void Perimetr();
};