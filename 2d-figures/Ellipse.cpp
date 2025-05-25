#include "Ellipse.h"

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
		return Numberic::PI * radius[0] * radius[1];
	}
}