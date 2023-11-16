#include "Figure.hpp"
#include "math.h"

class Square : public Figure
{
public:
	Square() {
		std::cout << "square created" << std::endl;
	};

	Square(double a) : Figure(calcSurface(a)) {
		std::cout << "square created" << std::endl;
	};

	~Square() {};

	double calcSurface(double a) {
		double s;
		return s = pow(a, 2);
	};

	void id() const override {
		std::cout << "figure type: square" << std::endl;
		std::cout << "surface area is: " << surface << std::endl;
	}
};
