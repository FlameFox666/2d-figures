#include "Circle.h"

namespace Area2D 
{
	Circle::Circle() : Oval() {}

	Circle::Circle(
		const std::string& name,
		const Coords& center,
		const Coords& radius
	) 
		: Oval(
			name,
			std::vector<Coords>{center, radius, radius}
		) {}

	Circle::Circle(
		const std::string& name,
		const std::vector<Coords>& coords
	) : Oval(name, coords) {}

	Circle::Circle(
		const std::string& name,
		const Coords* coords
	) : Circle(name, std::vector<Coords>{coords[0], coords[1], coords[1]}) {}

	double Circle::perimeter() const
	{
		return 2 * Constant::Numberic::PI * radius[0];
	}

	double Circle::area() const
	{
		return Constant::Numberic::PI * radius[0] * radius[0];
	}
}