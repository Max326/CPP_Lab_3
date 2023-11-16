#ifndef FIGURE_HPP
#define FIGURE_HPP

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

	// virtual void id() const {
	// 	std::cout << "figure type undefined" << std::endl;
	// 	std::cout << "surface area is: " << surface << std::endl;
	// }

protected:
	double surface;
};

#endif	// FIGURE_HPP