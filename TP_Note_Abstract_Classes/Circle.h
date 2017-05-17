#pragma once
#include "Figure.h"

// On définie la constante PI qui va nous servir pour les calculs d'aire et de perimetre du cercle
#define M_PI 3.14159265358979323846;

class CCircle :	public CFigure
{
	int m_radius;
public:

	CCircle(int x = 0, int y = 0, int radius = 1) : CFigure(x, y)
	{
		m_radius = radius;
	}

	// Setters et getters
	int radius() const { return m_radius; }
	int diameter() const { return m_radius * 2; }
	void setRadius(int value) { m_radius = value; }

	// Implémentation des méthodes virtuelles
	virtual void draw() {
		cout << "Je suis un cercle !" << endl;
		cout << "x : " << x() << " / y : " << y() << " / rayon : " << radius() << endl;
	}

	virtual float area() {
		return m_radius * m_radius * M_PI;
	}

	virtual float perimeter() {
		return diameter() * M_PI;
	}
};

