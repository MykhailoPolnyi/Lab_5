#include <iostream>
#include "Points.h"
using namespace std;

int main()
{	
	Polynom* figure_1 = new Polynom(5);
	figure_1->SetColor(Color::Orange);
	figure_1->GetPolynom();
	figure_1->Perym();
	cout << "Perimeter: " << figure_1->GetPer() << endl;

	figure_1->Max_Diag();
	cout << "Maximal diagonal: " << figure_1->GetMax_Diag() << endl;
	Sort_Pol_X(figure_1);
	figure_1->GetPolynom();
	figure_1->Max_Diag();
	cout << "Maximal diagonal: " << figure_1->GetMax_Diag() << endl;
	Sort_Pol_Y(figure_1);
	figure_1->GetPolynom();
	figure_1->Max_Diag();
	cout << "Maximal diagonal: " << figure_1->GetMax_Diag() << endl;
	delete figure_1;
}
