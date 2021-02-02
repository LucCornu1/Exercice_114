#pragma once

// Class point classique
class CPoint
{
protected:
	int m_nX, m_nY;

public:
	// Constructeur
	CPoint(int = 0, int = 0);

	// Destructeur
	virtual ~CPoint();


	// Fonctions membres
	void virtual affiche() const;
};