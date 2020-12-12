#include "Polynom.h"

Polynom::Polynom()
{
	perimetr = 0;
	longest_diagonal = 0;
	color = Color(0);
}

Polynom::Polynom(int points_number)
{
	int a, b;
	for (int i = 0; i < points_number; i++)
	{
		cin >> int a >> int b;
		figure_points.push_back(a, b);
	}
	perimetr = 0;
	longest_diagonal = 0;
	color = Color::Black;
}

void Polynom::GetPolynom()
{
	for (unsigned int i = 0; i < figure_points.size(); i++)
	{
		cout << "[" << i << "] - X = " <<figure_points[i].GetX() << "  Y = " << figure_points[i].GetY() << endl;
	}
}

double Polynom::GetMaxDiagonal()
{
	return longest_diagonal;
}

double Polynom::GetPerimetr()
{
	return perimetr;
}

void Polynom::SetColor(class Color c) 
{
	this->color = c;
}


void Polynom::MaxDiagonal()
{
	for (unsigned int i = 0; i < figure_points.size()-1; i++)
	{
		for (unsigned int j = i + 2; j < figure_points.size(); j++)
		{
			if (i == 0 && j == figure_points.size() - 1) { break; }
			if (Distance(this ,i, j) > l_d)
			{
				longest_diagonal = Distance(this, i, j);
			}
		}
	}
}

void Polynom::Perimetr()
{
	for (unsigned int i = 0; i < (figure_points.size() - 1);i++)
	{
		perimetr += Distance(this, i, i + 1);
	}
	perimetr += Distance(this , 0, figure_points.size()-1);
}

void SortPolynomForX(Polynom *newPolynom)
{
	for (int i = newPolynom->figure_points.size()-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (newPolynom->figure_points[i].GetX() < newPolynom->figure_points[j].GetX())
			{
				Point temp = newPolynom->figure_points[i];
				newPolynom->figure_points[i] = newPolynom->figure_points[j];
				newPolynom->figure_points[j] = temp;

			}
		}
	}
}

void SortPolynomForY(Polynom *newPolynom)
{
	for (int i = newPolynom->figure_points.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (newPolynom->figure_points[i].GetY() < newPolynom->figure_points[j].GetY())
			{
				Point temp = newPolynom->figure_points[i];
				newPolynom->figure_points[i] = newPolynom->figure_points[j];
				newPolynom->figure_points[j] = temp;
			}
		}
	}
}