//IMPLEMENTATION 
#include "TriangleHeader.h"

bool Triangle::setOpposite(float myOpposite) {//SENDS OPP TO HERE
	// set the width if it is valid
	if (myOpposite < 1.0f) {
		cout << "Invalid call to setWidth()... width must be greater than 0" << endl;//INPUT VALIDATION
		return FALSE;
	}
	opposite = myOpposite;//STORES IN OPPOSITE TO MANIPULATE

	// calculate the area and perimeter
	oppositeSquared = pow(opposite, 2);//SQUARE THE OPPOSITE
	adjacentSquared = pow(adjacent, 2);//SQUARE THE ADJACENT
	hypotenuse = sqrt(oppositeSquared + adjacentSquared);//SQURARE ROOT OF THE ADJ AND OPP SQUARE SUM
	area = ((opposite * adjacent) / 2);//1/2 BASE * HEIGHT FOR AREA
	perimeter = (opposite + adjacent) + hypotenuse; //ADD ALL SIDES

	return TRUE;
}
// SETTERS
bool Triangle::setAdjacent(float myAdjacent) {
	// set the length if it is valid
	if (myAdjacent < 1.0f) {
		cout << "Invalid call to setLength()... length must be greater than 0" << endl;
		return FALSE;
	}
	adjacent = myAdjacent;

	// calculate the area and perimeter
	oppositeSquared = pow(opposite, 2);//SQUARE THE OPPOSITE
	adjacentSquared = pow(adjacent, 2);//SQUARE THE ADJACENT
	hypotenuse = sqrt(oppositeSquared + adjacentSquared);//SQURARE ROOT OF THE ADJ AND OPP SQUARE SUM
	area = ((opposite * adjacent) / 2);//1/2 BASE * HEIGHT FOR AREA
	perimeter = (opposite + adjacent) + hypotenuse; //ADD ALL SIDES

	return TRUE;
}
// CONSTRUCTOR
Triangle::Triangle() {//initialize floats
	float opposite = (float)0.0;
	float adjacent = (float)0.0;
	float hypotenuse = (float)0.0;
	float oppositeSquared = (float)0.0;
	float adjacentSquared = (float)0.0;
	int area = 0;
	int perimeter = 0;
}

// GETTERS
float Triangle::getOpposite() {
	return opposite;
}

float Triangle::getAdjacent() {
	return adjacent;
}

float Triangle::getHypotenuse() {
	return hypotenuse;
}

int Triangle::getArea() {
	return area;
}

int Triangle::getPerimeter() {
	return perimeter;
}

