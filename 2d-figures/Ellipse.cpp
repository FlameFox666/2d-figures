#include "Ellipse.h"

namespace Area2D
{
	Ellipse::Ellipse() : Oval() {}

	// Конструктор з передачою координат через три окремі параметри.
	Ellipse::Ellipse(
		const std::string& name,
		const Coords& center,
		const Coords& radius1,
		const Coords& radius2
	) 
		: Oval(
			name,
			std::vector<Coords>{center, radius1, radius2}
		) {}

	// Конструктор з передачою координат через std::vector.
	Ellipse::Ellipse(
		const std::string& name,
		const std::vector<Coords>& coords
	) : Oval(name, coords) {}

	// Конструктор з передачою координат через звичайний масив.
	Ellipse::Ellipse(
		const std::string& name,
		const Coords* coords
	) : Ellipse(name, std::vector<Coords>(coords, coords + 3)) {
	}

	double Ellipse::perimeter() const 
	{
		double segment = (
			3 * (radius[0] + radius[1]) - 
			sqrt((3 * radius[0] + radius[1]) * (radius[0] + 3 * radius[1]))
		);
		
		return Constant::Numberic::PI * segment;
	}
	
	double Ellipse::area() const 
	{
		return Constant::Numberic::PI * radius[0] * radius[1];
	}
}