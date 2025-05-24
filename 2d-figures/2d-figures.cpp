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

	
	Coords coords[] = {
		{0.0, 0.0},
		{7.0, 7.0}
	};
	
	Circle circle("a", coords);
	CircleSector figure(circle, 2.0);
	figure.printCoords();
	for (auto& r : figure.getRadius()) {
		cout << "radius: " << r << "\n";
	}
	cout << figure.perimeter() << "\n";
	cout << figure.area() << "\n";

	CircleSector figure2(circle, 2);
	figure2.printCoords();
	for (auto& r : figure2.getRadius()) {
		cout << "radius: " << r << "\n";
	}
	cout << figure2.perimeter() << "\n";
	cout << figure2.area() << "\n";
}
// TODO: доработать Circle + Sector

/*
	* Ngon figure("abcd", coords, 5);
	figure.printCoords();
	for (auto& l : figure.getLine()) {
		cout << l << "\n";
	}
	cout << figure.perimeter() << "\n";
	cout << figure.area() << "\n";
	*/

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