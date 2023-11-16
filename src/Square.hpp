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

	virtual ~Square() {
		std::cout << "square incinerated" << std::endl;
	};

	double calcSurface(double a) {
		return pow(a, 2);
	};

	void id() const override {
		std::cout << "figure type: square" << std::endl;
		std::cout << "surface area is: " << surface << std::endl;
	}
};
