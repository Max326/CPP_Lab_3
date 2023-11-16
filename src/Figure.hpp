#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <iostream>

class Figure
{
public:
	Figure() {
		std::cout << "figure created" << std::endl;
	};
	Figure(double s) : surface(s) {
		std::cout << "figure created" << std::endl;
	}
	~Figure() {};

	double getSurface() {
		return surface;
	};

	virtual void id() const {
		std::cout << "figure type undefined" << std::endl;
		std::cout << "surface area is: " << surface << std::endl;
	}

protected:
	double surface;
};

#endif	// FIGURE_HPP