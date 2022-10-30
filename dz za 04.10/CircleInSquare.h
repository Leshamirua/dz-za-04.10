#pragma once
#include "Circle.h"
#include "Square.h"
#include <iostream>
using namespace std;
class CircleInSquare : public Circle, public Square
{
public:
	CircleInSquare(float r, float s) :Circle(r * 2), Square(s) {
		if (r * 2 != s) {
			cout << "Wrong number!";
		}
	};

};