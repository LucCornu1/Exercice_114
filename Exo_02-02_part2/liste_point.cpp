#pragma once
#include "liste_point.h"
#include <iostream>

using namespace std;

void liste_point::affiche()
// Fonction d'affichage qui affiche le premier, et tant que fini ne retourne pas vrai, affiche le prochain. A la fin, affiche un message pour signaler qu'il a termin�
{
	CPoint* pt = static_cast<CPoint*>(premier());
	pt->affiche();
	cout << endl;

	while (!this->fini())
	{
		pt = static_cast<CPoint*>(this->prochain());
		pt->affiche(); // Bug rencontr� : violation d'acc�s. Tentative d'affichage d'un objet null d� � un mauvais constructeur.
		cout << endl;
	}

	cout << "Fin affichage" << endl << endl;
}

void liste_point::message() // On pr�cise qu'on a trouv� un point avec des coordonn�es
{
	cout << "Trouve un point de coordonnees :" << endl;
}