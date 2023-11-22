#ifndef FIGUREVISITORBASE_HPP
#define FIGUREVISITORBASE_HPP

#pragma once

class FigureVisitorBase;
class Circle;
class Square;

class FigureVisitorBase
{
public:
	virtual void visit(Circle &) = 0;
	virtual void visit(Square &) = 0;
};

#endif