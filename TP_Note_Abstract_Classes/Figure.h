#pragma once
#include <iostream>
using namespace std;
/*
La classe CFigure est la classe qui va servir de base aux classes d�riv�es.
*/

class CFigure
{
private:
	int m_x, m_y;
public:

	CFigure(int x = 0, int y = 0)
	{
		m_x = x;
		m_y = y;
	}
	
	// Setters et getters
	int x() const { return m_x; }
	int y() const { return m_y; }
	void setX(int value) { m_x = value; }
	void setY(int value) { m_y = value; }
	void setPosition(int x, int y) { m_x = x; m_y = y; }

	// M�thode virtuelles pure qui doivent �tre impl�ment�es
	virtual void draw() = 0;
	virtual float area() = 0;
	virtual float perimeter() = 0;
};

