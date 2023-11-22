#ifndef FIGUREVISITOR_HPP
#define FIGUREVISITOR_HPP

#include "FigureVisitorBase.hpp"

class PrintingVisitor : public FigureVisitorBase{
    void visit(Square& square) override{
        std::cout << "Figure type: Square" << std::endl;
    }

    void visit(Circle& circle) override{
        std::cout << "Figure type: Circle" << std::endl;
    }
};

#endif