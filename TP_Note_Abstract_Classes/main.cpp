#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

#include <vector>

using namespace std;


int main() {

	// On déclare un vector de CFigure de taille size
	vector<CFigure*> container;

	// On déclare des formes
	CRectangle rect(0, 0, 10, 5);
	CCircle circle(2, 4, 12);
	CSquare square(3, 3, 4);

	// On les insère dans le container
	container.push_back(&rect);
	container.push_back(&circle);

	// On les modifie
	rect.setPosition(10, 10);
	circle.setRadius(100);

	// On les réinsère
	container.push_back(&rect);
	container.push_back(&circle);

	// Transtypage
	CFigure *figure = new CRectangle(666, 666, 666, 666);
	container.push_back(figure);

	// On dessine toutes les formes
	for (size_t i = 0; i < container.size(); i++)
		container.at(i)->draw();

	// On vide le container
	container.clear();

	system("PAUSE");
	return 0;
}