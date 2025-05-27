#include "Figure/Polygon/Quadrilateral.h"

using Area2D::Constant::Error;
using Area2D::Constant::Numberic;

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
	) 
		: Quadrilateral(name, std::vector<Coords>(coords, coords + 4)) {}

	
	void Quadrilateral::MeasureDiagonals() {
		if (coords.size() != Numberic::QUADRILATERAL_VERTEX_COUNT) 
		{
			throw std::invalid_argument(
				Error::UNAVAILABLE_COORDINATES
			);
		}

		diagonal[0] = MeasureDistance(coords[0], coords[2]);
		diagonal[1] = MeasureDistance(coords[1], coords[3]);
	}

	double Quadrilateral::perimeter() const
	{
		if (coords.size() != Numberic::QUADRILATERAL_VERTEX_COUNT)
		{
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
		}

		double result = lines[0] + lines[1] + lines[2] + lines[3];

		if (result <= 0)
		{
			throw std::logic_error(Error::DEGENERADE_POLYGON);
		}

		return result;
	}

	double Quadrilateral::area() const
	{
		if (coords.size() != Numberic::QUADRILATERAL_VERTEX_COUNT)
		{
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
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

		double result = diagonal[0] * diagonal[1] * 
						sinus * Constant::Numberic::DIVIDE_BY_TWO;

		if (result <= 0)
		{
			throw std::logic_error(Error::DEGENERADE_POLYGON);
		}

		return result;
	}

	void Quadrilateral::setCoords(const std::vector<Coords>& ñoords)
	{
		if (coords.size() != Numberic::QUADRILATERAL_VERTEX_COUNT)
		{
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
		}
		Figure::setCoords(coords);
	}

	void Quadrilateral::setCoords(const Coords* coords, size_t size)
	{
		if (size != Numberic::QUADRILATERAL_VERTEX_COUNT)
		{
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
		}
		Figure::setCoords(coords, size);
	}
}