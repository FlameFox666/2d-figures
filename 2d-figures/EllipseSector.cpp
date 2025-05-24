#include "EllipseSector.h"

namespace Area2D
{
	EllipseSector::EllipseSector() : Ellipse(), Sector() {}

	EllipseSector::EllipseSector(
		const Ellipse ellipse, double radian
	)
		: Ellipse(ellipse), Sector(radian) {}

	EllipseSector::EllipseSector(
		const Ellipse ellipse, int degree
	)
		: Ellipse(ellipse), Sector(degree) {}

	EllipseSector::EllipseSector(
		const std::string& name,
		const Coords& center,
		const Coords& radius1,
		const Coords& radius2,
		double radian
	)
		: Ellipse(name, center, radius1, radius2), Sector(radian) {}

	EllipseSector::EllipseSector(
		const std::string& name,
		const Coords& center,
		const Coords& radius1,
		const Coords& radius2,
		int degree
	)
		: Ellipse(name, center, radius1, radius2), Sector(degree) {}

	EllipseSector::EllipseSector(
		const std::string& name,
		const std::vector<Coords>& coords,
		double radian
	)
		: Ellipse(name, coords), Sector(radian) {}

	EllipseSector::EllipseSector(
		const std::string& name,
		const std::vector<Coords>& coords,
		int degree
	)
		: Ellipse(name, coords), Sector(degree) {}

	double EllipseSector::degreePerimeter() const
	{
		return 2 * sqrt( ( pow( radius[0], 2 ) + pow( radius[1], 2 ) ) / 2 ) +
			   static_cast<double>(degree) / Constant::Numberic::FULL_CIRCLE *
			   Ellipse::perimeter();
	}

	double EllipseSector::radianPerimeter() const
	{
		return 2 * sqrt( ( pow( radius[0], 2 ) + pow( radius[1], 2 ) ) / 2 ) +
			   Constant::Numberic::PI / Constant::Numberic::FULL_CIRCLE *
			   Ellipse::perimeter();
	}

	double EllipseSector::degreeArea() const
	{
		return (2 * Constant::Numberic::PI * radius[0] * radius[1] * degree) / 
			   Constant::Numberic::FULL_CIRCLE;
	}

	double EllipseSector::radianArea() const
	{
		return Constant::Numberic::DIVIDE_BY_TWO * 
			   radius[0] * radius[1] * radian;
	}

	double EllipseSector::perimeter() const
	{
		switch (measure)
		{
		case Measure::DEGREE:
			return degreePerimeter();
		case Measure::RADIAN:
			return radianPerimeter();
		default:
			throw std::invalid_argument(Constant::Error::SECTOR_IVALID_MEASURE_TYPE);
		}
	}

	double EllipseSector::area() const
	{
		switch (measure)
		{
		case Measure::DEGREE:
			return degreeArea();
		case Measure::RADIAN:
			return radianArea();
		default:
			throw std::invalid_argument(Constant::Error::SECTOR_IVALID_MEASURE_TYPE);
		}
	}

}
