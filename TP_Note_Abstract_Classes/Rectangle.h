#pragma once
#include "Figure.h"

class CRectangle : public CFigure
{
	int m_width, m_height;
public:
	CRectangle(int x = 0, int y = 0, int width = 1, int height = 1) : CFigure(x, y)
	{
		m_width = width;
		m_height = height;
	}

	// Setters et getters
	int width() const { return m_width; }
	int height() const { return m_height; }
	void setWidth(int value) { m_width = value; }
	void setHeight(int value) { m_height = value; }

	// Implémentation des méthodes virtuelles
	virtual void draw() {
		cout << "Je suis un rectangle !" << endl;
		cout << "x : " << x() << " / y : " << y() << " / width : " << width() << " / height : " << height() << endl;
	}

	virtual float area() {
		return (float) m_width * m_height;
	}

	virtual float perimeter() {
		return (float) 2 * (m_width + m_height);
	}
};

