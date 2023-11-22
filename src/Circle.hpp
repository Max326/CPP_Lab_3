#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#pragma once

#include "Figure.hpp"
#include "math.h"
#include "FigureVisitorBase.hpp"

class Circle : public Figure
{
public:
	Circle() {
		//std::cout << "circle created" << std::endl;
	};
	Circle(double r) : Figure(calcSurface(r)) {
		//std::cout << "circle created" << std::endl;
	};

	virtual ~Circle() {
		//std::cout << "circle incinerated" << std::endl;
	};

	double calcSurface(double r) {
		return M_PI * pow(r, 2);
	};

	void id() const override {
		std::cout << "figure type: circle" << std::endl;
		std::cout << "surface area is: " << surface << std::endl;
	}

    void accept(FigureVisitorBase& visitor) override{
        visitor.visit(*this);
    }
};

#endif