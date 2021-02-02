#pragma once
#include "CListe.h"
#include "CPoint.h"

class liste_point : public CListe, public CPoint
{
public:
	// Constructeur
	liste_point() 
	{
		// Constructeur
	}


	// Fonctions membres
	void affiche();

	void message() override; // Fonction qui override la fonction de même nom dans CListe.h
};