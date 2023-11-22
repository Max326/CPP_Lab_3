#ifndef FIGUREVECTOR_HPP
#define FIGUREVECTOR_HPP


#include <new>
#include "Figure.hpp"


class FigureVector
{
public:
	static const int size = 10;
	int counter;

public:
	Figure* figurePtrTab[size];

	FigureVector() : counter {0} {
		for(int i = 0; i < size; i++) {
			figurePtrTab[i] = nullptr;
		}
	};

	~FigureVector() {
		for(int i = 0; i < size; i++) {
			if(figurePtrTab[i] != nullptr) {
				delete figurePtrTab[i];
				figurePtrTab[i] = nullptr;
			}
		}
		//std::cout << "destructor called" << std::endl;
	};

	Figure*& operator[](int index) {
		if(index >= 0 && index < size) {
			if(figurePtrTab[index] == nullptr) {
				counter++;
			}
			return figurePtrTab[index];
		} else {
			static Figure* temp = nullptr;
			return temp;
		}
	};

	void printVector() {
		for(int i = 0; i < size; i++) {
			std::cout << figurePtrTab[i] << std::endl;
		}
	}

	void printCounter() {
		std::cout << "number of objects allocated to tab: " << counter << std::endl;
	}

	void push(Figure* newFigure) {
		if(counter < size) {
			figurePtrTab[counter++] = newFigure;
		}
	}

    void pop(){
        delete figurePtrTab[counter-1];
        figurePtrTab[counter-1] = nullptr;
        --counter;
    }

    void idAll(){
        for(int i = 0; i < counter; i++) {
            figurePtrTab[i]->id();
        }
    }

    void visitAll(FigureVisitorBase& visitor){
        for(int i = 0; i < counter; i++) {
            figurePtrTab[i]->accept(visitor);
        }
    }
};

#endif