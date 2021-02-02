#pragma once
#include "liste_point.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "Exercice 114" << endl;
	liste_point lp;

	CPoint pt(10, 10);
	CPoint pt1(0, 8);
	CPoint pt2(7, 5);
	CPoint pt3(14, 3);
	CPoint pt4(9, 0);

	CPoint* ppt = &pt;
	CPoint* ppt1 = &pt1;
	CPoint* ppt2 = &pt2;
	CPoint* ppt3 = &pt3;
	CPoint* ppt4 = &pt4;

	// On peuple la liste
	lp.ajoute(ppt);
	lp.ajoute(ppt1);
	lp.ajoute(ppt2);
	lp.ajoute(ppt3);
	lp.ajoute(ppt4);

	// On affiche les élements de la liste
	lp.affiche();


	return 0;
}