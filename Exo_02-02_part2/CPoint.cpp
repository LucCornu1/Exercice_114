#pragma once
#include "CPoint.h"
#include <iostream>

using namespace std;


// Constructeur
CPoint::CPoint(int nX, int nY)
{
	this->m_nX = nX;
	this->m_nY = nY;
}

// Destructeur
CPoint::~CPoint()
{
	// Destructeur
}


// Fonctions membres
void CPoint::affiche() const
{
	cout << this->m_nX << " ; " << this->m_nY << endl;
}