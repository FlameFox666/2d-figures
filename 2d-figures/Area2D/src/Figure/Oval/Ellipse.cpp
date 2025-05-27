#include "Figure/Oval/Ellipse.h"

using Area2D::Constant::Error;
using Area2D::Constant::Numberic;

namespace Area2D
{
	Ellipse::Ellipse() : Oval() {}

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

	Ellipse::Ellipse(
		const std::string& name,
		const std::vector<Coords>& coords
	) 
		: Oval(name, coords) {}

	Ellipse::Ellipse(
		const std::string& name,
		const Coords* coords
	) 
		: Ellipse(name, std::vector<Coords>(coords, coords + 3)) {}

	double Ellipse::perimeter() const 
	{
		if (coords.empty()) {
			std::cerr << Error::UNAVAILABLE_COORDINATES;
			return 0.0;
		}

		double segment = (
			Numberic::RAMANUJAN_APPROX_COEFF * (radius[0] + radius[1]) - 
			sqrt(
				(Numberic::RAMANUJAN_APPROX_COEFF * radius[0] + radius[1]) * 
				(radius[0] + Numberic::RAMANUJAN_APPROX_COEFF * radius[1])
			)
		);
		
		return Numberic::PI * segment;
	}
	
	double Ellipse::area() const 
	{
		if (coords.empty()) {
			std::cerr << Error::UNAVAILABLE_COORDINATES;
			return 0.0;
		}

		return Numberic::PI * radius[0] * radius[1];
	}

	void Ellipse::setCoords(const std::vector<Coords>& ñoords)
	{
		if (coords.size() != Numberic::MINIMAL_OVAL_COORDINATES)
		{
			std::cerr << Error::OVAL_INVALID_COORDINATES;
			return;
		}
		Figure::setCoords(coords);
	}

	void Ellipse::setCoords(const Coords* coords, size_t size)
	{
		if (size != Numberic::MINIMAL_OVAL_COORDINATES)
		{
			std::cerr << Error::OVAL_INVALID_COORDINATES;
			return;
		}
		Figure::setCoords(coords, size);
	}
}