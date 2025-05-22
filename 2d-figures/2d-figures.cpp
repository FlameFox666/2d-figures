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
	/*
	Coords coords[3] = {
		{-1, -1}, {0, 2}, {2, -1}
	};

	//Triangle triangle1;
	//Triangle triangle2({2, 31}, {-4, 1}, {3, -2});
	//Triangle triangle3("abc", coords);

	//triangle1.printCoords();
	//triangle2.printCoords();
	triangle3.printCoords();
	cout << triangle3.perimeter() << "\n";
	cout << triangle3.area() << "\n";
	Triangle triangle4 = triangle3;
	triangle4.printCoords();
	*/
	/*
	Quadrilateral quad1;
	Quadrilateral quad2("Qwer", { 0, 0 }, {1, 0}, {1, 1}, {0, 1});
	
	Coords coords[4] = {
		{-2, 4}, {5, 4}, {5, -3}, {-2, -3}
	};

	Quadrilateral quad3("Qwer", coords);

	quad1.printCoords();
	quad2.printCoords();
	quad3.printCoords();
	cout << quad1.perimeter() << "\n";
	cout << quad2.perimeter() << "\n";
	cout << quad3.perimeter() << "\n";
	*/

	
	Coords coords[3] = {
		{-1, -1}, {0, 2}, {2, -1}
	};

	Triangle tri("abc", coords);
	tri.printCoords();
	cout << tri.getCoords()[1];
}
// TODO: доработать Circle + Sector

/*
	Coords coords[5] = {
		{0, 0}, {1, 3}, {2, 4}, {3, 3}, {5, 0}
	};
	Ngon ngon1;
	Ngon ngon2("Qwerrt", coords, 5);
	ngon2.printCoords();
	cout << ngon2.perimeter() << "\n";
	cout << ngon2.area();
*/