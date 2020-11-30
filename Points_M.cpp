#include "Points.h"
// Get_Point
double Point::GetX(){
	return x;
	}

double Point::GetY() {
	return y;
}
 
void Point::GetCoord() {
	cout << "x: " << x << std::endl << "y: " << y << endl;
}
// Get_Polynom

void Polynom::GetPolynom()
{
	for (unsigned int i = 0; i < figure.size(); i++)
	{
		cout << "[" << i << "] - X = " <<figure[i].GetX() << "  Y = " << figure[i].GetY() << endl;
	}
}

double Polynom::GetMax_Diag()
{
	return l_d;
}

double Polynom::GetPer()
{
	return per;
}

void Polynom::SetColor(int i) 
{
	this->col = Color(i % 8);
}
// ? max diag, ? per
void Polynom::Max_Diag()
{
	for (unsigned int i = 0; i < figure.size()-1; i++)
	{
		for (unsigned int j = i + 2; j < figure.size(); j++)
		{
			if (i == 0 && j == figure.size() - 1) { break; }
			if (Dist(this ,i, j) > l_d)
			{
				l_d = Dist(this, i, j);
			}
		}
	}
}

void Polynom::Perym()
{
	for (unsigned int i = 0; i < (figure.size() - 1);i++)
	{
		per += Dist(this, i, i + 1);
	}
	per += Dist(this , 0, figure.size()-1);
}
// friend func
double Dist(Point* a, Point* b)
{
	return (sqrt(pow((a->x - b->x), 2) + pow((a->y - b->y), 2)));
}

double Dist(Polynom* P, int a, int b)
{
	return (sqrt(pow((P->figure[a].GetX() - P->figure[b].GetX()), 2) + pow((P->figure[a].GetY() - P->figure[b].GetY()), 2)));
}

void Sort_Pol_X(Polynom *pol)
{
	for (int i = pol->figure.size()-1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (pol->figure[i].GetX() < pol->figure[j].GetX())
			{
				Point temp = pol->figure[i];
				pol->figure[i] = pol->figure[j];
				pol->figure[j] = temp;

			}
		}
	}
}

void Sort_Pol_Y(Polynom *pol)
{
	for (int i = pol->figure.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (pol->figure[i].GetY() < pol->figure[j].GetY())
			{
				Point temp = pol->figure[i];
				pol->figure[i] = pol->figure[j];
				pol->figure[j] = temp;
			}
		}
	}
}