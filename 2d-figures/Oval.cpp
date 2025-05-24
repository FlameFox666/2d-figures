#include "Oval.h"

namespace Area2D 
{
	Oval::Oval() : Figure(), radius() {}

	Oval::Oval(
		const std::string& name,
		const std::vector<Coords>& coords
	) 
		: Figure(name, coords), radius()
	{
		if (coords.size() != 3)
		{
			std::cerr << Constant::Error::OVAL_INVALID_COORDINATES;
			return;
		}
		radius[0] = std::abs(
			coords[toInt((CoordsIndex::HORIZONTAL_RADIUS))].x -
			coords[toInt((CoordsIndex::CENTER))].x
		);

		radius[1] = std::abs(
			coords[toInt((CoordsIndex::VERTICAL_RADIUS))].y - 
			coords[toInt((CoordsIndex::CENTER))].y
		);

	}

	const std::array<double, 2>& Oval::getRadius() const
	{
		return radius;
	}

	void Oval::printCoords() const
	{
		if (coords.empty())
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return;
		}

		std::cout << name << Constant::Message::COORDINATES_PRINT;

		std::cout << Constant::Message::OVAL_CENTER << 
			coords[static_cast<int>(CoordsIndex::CENTER)] << "\n";

		if (
			coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)] == 
			coords[toInt(CoordsIndex::VERTICAL_RADIUS)]
			)
		{
			std::cout << Constant::Message::OVAL_RADIUS << 
				coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)] << "\n";
		}
		else
		{
			std::cout << Constant::Message::OVAL_HORIZONTAL << 
				coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)] << "\n";

			std::cout << Constant::Message::OVAL_VERTICAL <<
				coords[toInt(CoordsIndex::VERTICAL_RADIUS)] << "\n";
		}
	}

}