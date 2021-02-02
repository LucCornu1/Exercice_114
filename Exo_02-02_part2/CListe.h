#pragma once

struct element
{
	element* suivant;
	void* contenu;
};

class CListe
{
protected:
	element* m_debut; // Le premier de la liste
	element* m_cursor; // Un curseur qui va parcourir la liste

public:
	// Constructeur
	CListe();

	// Destructeur
	~CListe();


	// Fonctions membres
	void ajoute(void*);

	void* premier();

	void* prochain();

	bool fini();

	virtual void message();
};