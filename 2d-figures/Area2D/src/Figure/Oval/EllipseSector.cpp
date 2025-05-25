#include "Figure/Oval/EllipseSector.h"

using Area2D::Constant::Error;
using Area2D::Constant::Numberic;

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
		double squareRoot = sqrt(
			(pow(radius[0], Numberic::POWER_OF_TWO)  +
			 pow(radius[1], Numberic::POWER_OF_TWO)) * Numberic::DIVIDE_BY_TWO
		);

		return Numberic::RADIUS_COUNT * squareRoot + static_cast<double>(degree) / 
			   Numberic::FULL_CIRCLE * Ellipse::perimeter();
	}

	double EllipseSector::radianPerimeter() const
	{
		double squareRoot = sqrt(
			(pow(radius[0], Numberic::POWER_OF_TWO)  + 
			 pow(radius[1], Numberic::POWER_OF_TWO)) * Numberic::DIVIDE_BY_TWO
		);

		return Numberic::RADIUS_COUNT * squareRoot + 
			   (radian / (Numberic::TWO_PI)) * Ellipse::perimeter();
	}

	double EllipseSector::degreeArea() const
	{
		return (Numberic::TWO_PI * radius[0] * radius[1] * degree) /
			   Numberic::FULL_CIRCLE;
	}

	double EllipseSector::radianArea() const
	{
		return Numberic::DIVIDE_BY_TWO *  radius[0] * radius[1] * radian;
	}

	double EllipseSector::perimeter() const
	{
		if (degree > -1)
		{
			return degreePerimeter();
		}
		else if (radian > -1.0)
		{
			return radianPerimeter();
		}
		else
		{
			throw std::invalid_argument(Error::SECTOR_IVALID_ANGLE);
		}
	}

	double EllipseSector::area() const
	{
		if (degree > -1)
		{
			return degreeArea();
		}
		else if (radian > -1.0)
		{
			return radianArea();
		}
		else
		{
			throw std::invalid_argument(Error::SECTOR_IVALID_ANGLE);
		}
	}

}
