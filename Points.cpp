#include "Points.h"

Point::Point(double ox, double oy)
{
x_coordinate = oy;
y_coordinate = ox;
}

double Point::GetX(){
	return x_coordinate;
	}

double Point::GetY() {
	return y_coordinate;
}
 
void Point::GetCoordinates() {
	cout << "x: " << x_coordinate << endl << "y: " << y_coordinate << endl;
}




double Distance(Point* first_point, Point* second_point)
{
	return (sqrt(pow((first_point->x - second_point->x), 2) + pow((first_point->y - second_point->y), 2)));
}

double Distance(Polynom* Polynom, int point_num_1, int point_num_2)
{
	return (sqrt(pow((Polynom->figure_points[point_num_1].GetX() - Polynom->figure_points[point_num_2].GetX()), 2) + pow((Polynom->figure_points[point_num_1].GetY() - Polynom->figure_points[point_num_2].GetY()), 2)));
}

