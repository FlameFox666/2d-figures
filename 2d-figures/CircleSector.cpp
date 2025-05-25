#include "CircleSector.h"

using Area2D::Constant::Error;
using Area2D::Constant::Numberic;

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
		return Numberic::RADIUS_COUNT * radius[0] +
			  (static_cast<double>(degree) / Numberic::FULL_CIRCLE) *
			  (Numberic::RADIUS_COUNT * Numberic::PI * radius[0]);
	}

	double CircleSector::radianPerimeter() const
	{
		return Numberic::RADIUS_COUNT * radius[0] + radius[0] * radian;
	}

	double CircleSector::degreeArea() const
	{
		return (static_cast<double>(degree) / Numberic::FULL_CIRCLE) * 
			Numberic::PI * radius[0] * radius[0];
	}

	double CircleSector::radianArea() const
	{
		return radian * radius[0] * radius[0] * Numberic::DIVIDE_BY_TWO;
	}

	double CircleSector::perimeter() const
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

	double CircleSector::area() const
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