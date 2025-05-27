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
			std::cerr << Error::UNAVAILABLE_COORDINATES;
			return 0.0;
		}
		
		double result = 0.0;
		for (double line : lines)
		{
			result += line;
		}

		if (result <= 0)
		{
			std::cerr << Error::DEGENERADE_POLYGON;
			return 0.0;
		}

		return result;
	}

	double Ngon::area() const
	{
		if (coords.size() < Numberic::MINIMAL_NGON_VERTICES)
		{
			std::cerr << Error::UNAVAILABLE_COORDINATES;
			return 0.0;
			//throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
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
			std::cerr << Error::DEGENERADE_POLYGON;
			return 0.0;
		}

		return result;
	}

	void Ngon::setCoords(const std::vector<Coords>& ñoords)
	{
		if (coords.size() != Numberic::MINIMAL_NGON_VERTICES)
		{
			std::cerr << Error::NGON_LESS_THAN_FIVE_COORDINATES;
			return;
		}
		Figure::setCoords(coords);
	}

	void Ngon::setCoords(const Coords* coords, size_t size)
	{
		if (size <= Numberic::MINIMAL_NGON_VERTICES)
		{
			std::cerr << Error::NGON_LESS_THAN_FIVE_COORDINATES;
			return;
		}
		Figure::setCoords(coords, size);
	}
}