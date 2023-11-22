#ifndef FIGURE_HPP
#define FIGURE_HPP

#pragma once

#include <iostream>
#include "GeoEntity.hpp"

class FigureVisitorBase;


class Figure : public GeoEntity
{
public:
	Figure() {
		//std::cout << "figure created" << std::endl;
	};
	Figure(double s) : surface(s) {
		//std::cout << "figure created" << std::endl;
	}
	virtual ~Figure() {
		//std::cout << "figure incinerated" << std::endl;
	};

	double getSurface() {
		return surface;
	};

	void id() const override {
		std::cout << "figure type undefined" << std::endl;
		std::cout << "surface area is: " << surface << std::endl;
	}

    virtual void accept(FigureVisitorBase& visitor) = 0;

protected:
	double surface;
};

#endif