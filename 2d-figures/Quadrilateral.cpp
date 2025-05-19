#include "Quadrilateral.h"
#include <cmath>

namespace Area2D
{
	Quadrilateral::Quadrilateral() : Polygon() 
	{
		MeasureDiagonals();
	}

	Quadrilateral::Quadrilateral(
		const std::string& name,
		const Coords& first,
		const Coords& second,
		const Coords& third,
		const Coords& fourth
	)
		: Polygon(
			name,
			new Coords[4]{ first, second, third, fourth }, 4
		) 
	{
		MeasureDiagonals();
	}

	Quadrilateral::Quadrilateral(
		const std::string& name,
		const Coords* coords
	) 
		: Polygon(name, coords, 4) 
	{
		MeasureDiagonals();
	}
	
	void Quadrilateral::MeasureDiagonals() {
		diagonal[0] = MeasureDistance(coords[0], coords[2]);
		diagonal[1] = MeasureDistance(coords[1], coords[3]);
	}

	double Quadrilateral::perimeter() const
	{
		return lines[0] + lines[1] +
			   lines[2] + lines[3];
	}

	double Quadrilateral::area() const
	{
		double diagonalScalar = (
			(coords[2].x - coords[0].x) * (coords[3].x - coords[1].x) +
			(coords[2].y - coords[0].y) * (coords[3].y - coords[1].y)
		);

		double sinus = sin(
			sqrt(1 - pow(cos((diagonal[0] * diagonal[1]) / diagonalScalar), 2))
		);

		return diagonal[0] * diagonal[1] * sinus * DIVIDER;
	}
}