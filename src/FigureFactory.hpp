#pragma once
#include "Circle.hpp"
#include "Figure.hpp"
#include "Square.hpp"

class FigureFactory
{
public:
	Figure* operator()(const std::string& s, const double& x) {
		if(s == "circle") {
			return new Circle(x);
		} else if(s == "square") {
			return new Square(x);
		} else {
			return nullptr;
		}
	}
};