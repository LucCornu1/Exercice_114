#pragma once
#include "CListe.h"
#include <iostream>

using namespace std;


// Constructeur
CListe::CListe()
{
	this->m_debut = nullptr; // Bug rencontr� : ne doit pas �tre initialis� dans le constructeur.

	this->m_cursor = nullptr;
}

// Destructeur
CListe::~CListe()
{
	element* elem;
	this->m_cursor = this->m_debut; // On met le m_cursor au d�but de la liste

	while (this->m_cursor != nullptr)
	{
		elem = this->m_cursor->suivant;
		delete this->m_cursor;
		this->m_cursor = elem;
	}

	// delete this->m_debut; // Bug rencontr� : il ne faut pas delete le m_debut, il a d�j� �t� d�truit gr�ce � m_cursor (en tout premier).
}


// Fonctions membres
void CListe::ajoute(void* contenu)
// Fonction qui ajoute un �lement au d�but de la liste
{
	element* elem = new element;
	elem->suivant = this->m_debut;
	elem->contenu = contenu;

	this->m_debut = elem;
}

void* CListe::premier()
// Retourne le contenu du premier s'il ne pointe pas vers un nullptr, sinon retourne null; et initialise m_cursor
{
	if (this->m_debut != nullptr)
	{
		this->m_cursor = this->m_debut;
		this->message();
		return this->m_cursor->contenu;
	}

	return NULL;
}

void* CListe::prochain()
// Retourne le contenu du prochain s'il ne pointe pas vers un nullptr, sinon retourne null
{
	if (this->m_cursor != nullptr)
	{
		if (this->m_cursor->suivant != nullptr) // Bug rencontr� : violation d'acc�s. Il faut mettre premier avant prochain, sinon m_cursor n'est pas initialis�.
		{
			this->m_cursor = this->m_cursor->suivant;
			this->message();

			return this->m_cursor->contenu;
		}

		cout << "Fin de liste" << endl;

		return NULL;
	}

	cout << "Erreur" << endl;

	return NULL;
}

bool CListe::fini()
// Retourne vrai si le suivant = nullptr, sinon retourne faux
{
	return (this->m_cursor->suivant == nullptr); // Bug rencontr� : violation d'acc�s. Il faut mettre premier avant prochain, sinon m_cursor n'est pas initialis�.
}

void CListe::message()
// Fonction qui est surcharg� dans la classe liste_point.
{
	cout << "Trouve" << endl;
}