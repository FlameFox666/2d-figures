#include "Quadrilateral.h"

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
			std::vector<Coords>{ first, second, third, fourth }
		) 
	{
		MeasureDiagonals();
	}

	Quadrilateral::Quadrilateral(
		const std::string& name,
		const std::vector<Coords>& coords
	) 
		: Polygon(name, coords) 
	{
		MeasureDiagonals();
	}

	Quadrilateral::Quadrilateral(
		const std::string& name,
		const Coords* coords
	) : Quadrilateral(name, std::vector<Coords>(coords, coords + 4)) {}

	
	void Quadrilateral::MeasureDiagonals() {
		if (coords.size() != 4) 
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return;
		}
		diagonal[0] = MeasureDistance(coords[0], coords[2]);
		diagonal[1] = MeasureDistance(coords[1], coords[3]);
	}

	double Quadrilateral::perimeter() const
	{
		if (coords.size() != 4)
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return 0.0;
		}

		return lines[0] + lines[1] +
			   lines[2] + lines[3];
	}

	double Quadrilateral::area() const
	{
		if (coords.size() != 4)
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return 0.0;
		}

		double diagonalScalar = (
			(coords[2].x - coords[0].x) * (coords[3].x - coords[1].x) +
			(coords[2].y - coords[0].y) * (coords[3].y - coords[1].y)
		);

		double cosTheta = diagonalScalar / (diagonal[0] * diagonal[1]);

		if (cosTheta < -1.0) 
		{
			cosTheta = -1.0;
		}
		else if (cosTheta > 1.0) 
		{
			cosTheta = 1.0;
		}

		double sinus = sqrt(1 - cosTheta * cosTheta);

		return diagonal[0] * diagonal[1] * sinus * Constant::Numberic::DIVIDE_BY_TWO;
	}
}