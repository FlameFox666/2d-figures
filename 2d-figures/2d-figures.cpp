#include <iostream>
#include "Coords.h"

// Спроектувати та реалізувати бібліотеку класів для розробки програми знаходження площі 2D-фігур

/*
Coords

Figure:
	Polygon:
		Triangle:
			RightTriangle
			EquilateralTriangle
			ScaleneTriangle
				IsoscelesTriangle

		Quadrilateral:
			Rectangle
				Square
			Parallelogram
				Rhombus
			Trapezium
				IsoscelesTrapezium

		Ngon:
			RegularPolygon
			IrregularPolygon
	Oval:
		Ellipse:
			EllipseSector
		Circle:
			CircleSector
Sector

Canvas

*/

using namespace Area2D;

int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	
	Coords p1(1.2, 1.2);
	cout << p1;
	Coords p2 = p1;
	cout << p2;
}
