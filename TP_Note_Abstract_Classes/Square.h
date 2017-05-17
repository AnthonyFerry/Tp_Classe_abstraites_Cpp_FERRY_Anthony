#pragma once
#include "Rectangle.h"
class CSquare :	private CRectangle
{
public:

	CSquare(int x = 0, int y = 0, int size = 1) : CRectangle(x, y, size, size) {}

	// Setters et getters
	int bord() const { return width() == height() ? width() : 0; }
	void setBord(int value) { setWidth(value); setHeight(value); }

	// Implémentation des méthodes virtuelles
	virtual void draw() {
		cout << "Je suis un carre !" << endl;
		cout << "x : " << x() << " / y : " << y() << " / cote : " << bord() << endl;
	}

	virtual float area() {
		return (float) bord() * bord();
	}

	virtual float perimeter() {
		return (float) 4 * bord();
	}
};

