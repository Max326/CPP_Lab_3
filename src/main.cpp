#include <iostream>

#include "Circle.hpp"
#include "Figure.hpp"
#include "GeoEntity.hpp"
#include "Square.hpp"

void id(const Figure& f);

int main() {
	Figure figure(45);

	figure.id();

	// Circle c1(5);

	// c1.id();
	// Square s1(10);

	// s1.id();

	// id(c1);

	// Figure f1 = static_cast<Figure>(c1);

	// f1.id();

	Figure* f2 = new Square(10);

	// f2 = dynamic_cast<Circle*>(f2);

	delete f2;

	// GeoEntity geoEntity;

	return 0;
}

void id(const Figure& f) {
	f.id();
}
