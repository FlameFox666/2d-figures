#include "CircleSector.h"

namespace Area2D
{
	CircleSector::CircleSector() : Circle(), Sector() {}

	CircleSector::CircleSector(
		const Circle circle, double radian
	) 
		: Circle(circle), Sector(radian) {}
	
	CircleSector::CircleSector(
		const Circle circle, int degree
	) 
		: Circle(circle), Sector(degree) {}

	CircleSector::CircleSector(
		const std::string& name,
		const Coords& center,
		const Coords& radius,
		double radian
	) 
		: Circle(name, center, radius), Sector(radian) {}

	CircleSector::CircleSector(
		const std::string& name,
		const Coords& center,
		const Coords& radius,
		int degree
	) 
		: Circle(name, center, radius), Sector(degree) {}

	CircleSector::CircleSector(
		const std::string& name,
		const std::vector<Coords>& coords,
		double radian
	) 
		: Circle(name, coords), Sector(radian) {}

	CircleSector::CircleSector(
		const std::string& name,
		const std::vector<Coords>& coords,
		int degree
	) 
		: Circle(name, coords), Sector(degree) {}

	double CircleSector::degreePerimeter() const
	{
		return 2 * radius[0] + 
			(static_cast<double>(degree) / Constant::Numberic::FULL_CIRCLE) * 
			(2 * Constant::Numberic::PI * radius[0]);
	}

	double CircleSector::radianPerimeter() const
	{
		return 2 * radius[0] + radius[0] * radian;
	}

	double CircleSector::degreeArea() const
	{
		return (static_cast<double>(degree) / Constant::Numberic::FULL_CIRCLE) * 
			Constant::Numberic::PI * radius[0] * radius[0];
	}

	double CircleSector::radianArea() const
	{
		return static_cast<double>(degree) / Constant::Numberic::FULL_CIRCLE *
			Constant::Numberic::PI * radius[0] * radius[0];
	}

	double CircleSector::perimeter() const
	{
		switch (measure)
		{
		case static_cast<int>(Measure::DEGREE):
			return degreePerimeter();
		case static_cast<int>(Measure::RADIAN):
			return radianPerimeter();
		default:
			throw std::invalid_argument(Constant::Error::SECTOR_IVALID_MEASURE_TYPE);
		}
	}

	double CircleSector::area() const
	{
		switch (measure)
		{
		case static_cast<int>(Measure::DEGREE):
			return degreeArea();
		case static_cast<int>(Measure::RADIAN):
			return radianArea();
		default:
			throw std::invalid_argument(Constant::Error::SECTOR_IVALID_MEASURE_TYPE);
		}
	}

}