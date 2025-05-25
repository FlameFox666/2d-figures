#include "Figure/Oval/Oval.h"

using Area2D::Constant::Error;
using Area2D::Constant::Message;
using Area2D::Constant::Numberic;

namespace Area2D 
{
	Oval::Oval() : Figure(), radius() {}

	Oval::Oval(
		const std::string& name,
		const std::vector<Coords>& coords
	) 
		: Figure(name, coords), radius()
	{
		if (coords.size() != Numberic::MINIMAL_OVAL_COORDINATES)
		{
			throw std::invalid_argument(Error::OVAL_INVALID_COORDINATES);
		}

		Coords center = 
			coords[toInt(CoordsIndex::CENTER)];
		Coords horizontalRadius = 
			coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)];
		Coords verticalRadius = 
			coords[toInt(CoordsIndex::VERTICAL_RADIUS)];

		radius[0] = sqrt(
			pow((horizontalRadius.x - center.x), Numberic::POWER_OF_TWO) +
			pow((horizontalRadius.y - center.y), Numberic::POWER_OF_TWO)
		);
		
		radius[1] = sqrt(
			pow((verticalRadius.x - center.x), Numberic::POWER_OF_TWO) +
			pow((verticalRadius.y - center.y), Numberic::POWER_OF_TWO)
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
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
		}

		std::cout << name << Message::COORDINATES_PRINT;

		std::cout << Message::OVAL_CENTER << 
			coords[toInt(CoordsIndex::CENTER)] << "\n";

		if (
			coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)] ==
			coords[toInt(CoordsIndex::VERTICAL_RADIUS)]
			)
		{
			std::cout << Message::OVAL_RADIUS << 
				 coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)] <<
				 "\n";
		}
		else
		{
			std::cout << Message::OVAL_HORIZONTAL << 
			     coords[toInt(CoordsIndex::HORIZONTAL_RADIUS)] <<
				 "\n";

			std::cout << Message::OVAL_VERTICAL <<
				 coords[toInt(CoordsIndex::VERTICAL_RADIUS)] <<
				 "\n";
		}
	}

	const double& Oval::operator[](size_t index) const
	{
		return getRadius()[index];
	}

}