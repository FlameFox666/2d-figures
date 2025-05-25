#include "Figure/Polygon/Ngon.h"

using Area2D::Constant::Error;
using Area2D::Constant::Numberic;

namespace Area2D 
{
	Ngon::Ngon() : Polygon() {}
	
	Ngon::Ngon(
		const std::string& name,
		const std::vector<Coords>& coords
	) 
		: Polygon(name, coords) 
	{
		if (coords.size() < Numberic::MINIMAL_NGON_VERTICES) {
			throw std::invalid_argument(
				Error::NGON_LESS_THAN_FIVE_COORDINATES
			);
		}
	}

	Ngon::Ngon(
		const std::string& name,
		const Coords* coords,
		int size
	) 
		: Ngon(name, std::vector<Coords>(coords, coords + size)) {}


	double Ngon::perimeter() const
	{
		if (coords.size() < Numberic::MINIMAL_NGON_VERTICES)
		{
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
		}
		
		double result = 0.0;
		for (double line : lines)
		{
			result += line;
		}

		if (result <= 0)
		{
			throw std::logic_error(Error::DEGENERADE_POLYGON);
		}

		return result;
	}

	double Ngon::area() const
	{
		if (coords.size() < Numberic::MINIMAL_NGON_VERTICES)
		{
			throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
		}

		double res = 0.0;
		size_t size = coords.size();
		for (size_t i = 0; i < size; i++)
		{
			const Coords& coordsFirst  = coords[i];
			const Coords& coordsSecond = coords[(i + 1) % size];
			res += coordsFirst.x  * coordsSecond.y - 
				   coordsSecond.x * coordsFirst.y;
		}

		double result = std::abs(res) * Numberic::DIVIDE_BY_TWO;

		if (result <= 0)
		{
			throw std::logic_error(Error::DEGENERADE_POLYGON);
		}

		return result;
	}
}