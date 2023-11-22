#pragma once

#include <iostream>
#include "FigureFactory.hpp"
#include "Circle.hpp"
#include "Square.hpp"
class Circle;
class Square;
class Figure;

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