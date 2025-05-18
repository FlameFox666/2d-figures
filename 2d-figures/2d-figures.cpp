#include <iostream>
#include "Area2D.h"

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

/*
Полигоны: точка
			точка
			точка
			точка

Круги: центр
	   точки радиуса
	   точки радиуса
*/

using namespace Area2D;

int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	
	Coords coords[4] = {
		{-1, -1}, {0, 2}, {2, -1}, {0, 0}
	};

	//Triangle triangle1;
	//Triangle triangle2({2, 31}, {-4, 1}, {3, -2});
	Triangle triangle3("abc", coords);

	//triangle1.printCoords();
	//triangle2.printCoords();
	triangle3.printCoords();
	cout << triangle3.perimeter() << "\n";
	cout << triangle3.area() << "\n";
	Triangle triangle4 = triangle3;
	triangle4.printCoords();
}
