#pragma once
//HEADER FILE

#ifndef __TRIANGLE__
#define __TRIANGLE__

#include <iostream>
using namespace std;

#ifndef __TRUE_FALSE__
#define __TRUE_FALSE__
#define TRUE 1
#define FALSE 0
#endif

// CLASS RECTANGLE
class Triangle {
private:
	float opposite;
	float adjacent;
	float hypotenuse;
	float oppositeSquared;
	float adjacentSquared;
	int area;
	int perimeter;

public:
	// CONSTRUCTOR
	Triangle();

	// GETTERS
	float getOpposite();
	float getAdjacent();
	float getHypotenuse();
	int getArea();
	int getPerimeter();

	// SETTERS
	bool setOpposite(float);
	bool setAdjacent(float);
}; // end - Triangle

#endif#pragma once
