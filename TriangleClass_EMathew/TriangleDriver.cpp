//DRIVER FILE

#include <iostream>
#include <iomanip>//FOR IO MANIPULATION
#include <sstream>//USED TO GET STRING LENGTH
#include <conio.h>//GETCH
#include "TriangleHeader.h"//HEADER FILE

using namespace std;//STD

#ifndef __TRUE_FALSE__
#define __TRUE_FALSE__
#define TRUE 1
#define FALSE 0
#endif

int main() {
	// instantiate the class
	Triangle someTriangle;

	// set the length and width to something new
	someTriangle.setOpposite(3);//OPPOSITE
	someTriangle.setAdjacent(4);//ADJACENT

	float opp = someTriangle.getOpposite();//CONVERT TO FLOATS, USED TO VALIDATE INPUT
	float adj = someTriangle.getAdjacent();
	float hyp = someTriangle.getHypotenuse();

	if (opp < 0.0f || adj < 0.0f) {//DOESNT RUN PROGRAM FOR VALUES UNDER 0.0
		cout << "Please enter a valid value for opposite and adjacent above 0" << endl;
		return 0;
	}

	stringstream oppStream;//USED TO GET STRING LENGTH
	oppStream << fixed << "Opposite Side = " << opp;
	string o = oppStream.str();

	int printWidth = o.length();//STRING LENTH STORED IN INT


	// display the properties again
	// display properties upfront
	for (int i = 0; i <= 10; i++) {//PRINTS TRIANGLE
		if (i == 0) {
			cout << setw(7 + printWidth) << "*" << endl;//FIRST VALUE IS ONLY ONE *
		}
		else if (i == 5) {//AT 5TH ROW WE DISPLAY OPP AND HYP
			cout << setw(2 + printWidth) << "Opposite Side = " << setw(3) << opp << " " << "*" << setw(i) << "*" << " Hypotenuse Side = " << setprecision(3) << hyp << " " << endl;
		}
		else if (i == 10) {//END TRIANGLE AND PRINT ADJ
			cout << setw(7 + printWidth) << "*" << setw(i + 1) << setfill('*') << " " << setfill(' ');
		}
		else {//ELSE PRINT 
			cout << setw(7 + printWidth) << "*" << setw(i) << "*" << endl;
		}
	}

	cout << endl << setw(printWidth + 22) << " Adjacent Side = " << adj << endl;//PRINTS ADJ SIDE
	cout << "The area of the triangle is     : " << someTriangle.getArea() << endl;//PRINT PERMITER
	cout << "The perimeter of the triangle is: " << someTriangle.getPerimeter() << endl;//PRINT AREA
	cout << endl;

	_getch();
	return 0;
}