#include <iostream>

#include "Circle.hpp"
#include "Square.hpp"
#include "FigureVector.hpp"

void id(const Figure& f);

int main() {
	// Figure figure(45);

	//figure.id();

	// Circle c1(5);

	// c1.id();
	Square s1(10);

	// s1.id();

	// id(c1);

	// Figure f1 = static_cast<Figure>(c1);

	// f1.id();

	// Figure* f2 = new Square(10);

	// f2 = dynamic_cast<Circle*>(f2);

	// delete f2;

	// GeoEntity geoEntity;

	FigureVector figureVector;

	figureVector[0] = new Circle(5);

	figureVector.push(new Square(10));

	// figureVector.printVector();

	// figureVector.pop();

	// figureVector.printVector();

	// figureVector.printCounter();

	// Figure* mySquare = FigureFactory()("square", 11);
    // figureVector.push(mySquare);

    figureVector.idAll();

	return 0;
}

void id(const Figure& f) {
	f.id();
}
