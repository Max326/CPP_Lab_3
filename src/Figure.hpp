#pragma once

#include <iostream>
#include "GeoEntity.hpp"

class Figure : public GeoEntity
{
public:
	Figure() {
		std::cout << "figure created" << std::endl;
	};
	Figure(double s) : surface(s) {
		std::cout << "figure created" << std::endl;
	}
	virtual ~Figure() {
		std::cout << "figure incinerated" << std::endl;
	};

	double getSurface() {
		return surface;
	};

	void id() const override {
		std::cout << "figure type undefined" << std::endl;
		std::cout << "surface area is: " << surface << std::endl;
	}

protected:
	double surface;
};