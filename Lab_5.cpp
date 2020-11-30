#include <iostream>
#include "Points.h"
using namespace std;

int main()
{	
	Polynom* F1 = new Polynom(5);
	F1->SetColor(4);
	F1->GetPolynom();
	F1->Perym();
	cout << "Perym: " << F1->GetPer() << endl;

	F1->Max_Diag();
	cout << "Max diag: " << F1->GetMax_Diag() << endl;
	Sort_Pol_X(F1);
	F1->GetPolynom();
	F1->Max_Diag();
	cout << "Max diag: " << F1->GetMax_Diag() << endl;
	Sort_Pol_Y(F1);
	F1->GetPolynom();
	F1->Max_Diag();
	cout << "Max diag: " << F1->GetMax_Diag() << endl;
	delete F1;
}
