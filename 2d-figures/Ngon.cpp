#include "Ngon.h"

namespace Area2D 
{
	Ngon::Ngon() : Polygon() {}
	
	Ngon::Ngon(
		const std::string& name,
		const std::vector<Coords>& coords
	) 
		: Polygon(name, coords) 
	{
		if (coords.size() < 5) {
			std::cerr << Constant::Error::NGON_LESS_THAN_FIVE_COORDINATES;
			this->coords.clear();
			return;
		}
	}

	Ngon::Ngon(
		const std::string& name,
		const Coords* coords,
		int size
	) : Ngon(name, std::vector<Coords>(coords, coords + size)) {}


	double Ngon::perimeter() const
	{
		if (coords.size() < 5) 
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return 0.0;
		}
		
		double res = 0.0;
		for (double i : lines)
		{
			res += i;
		}
		return res;
	}

	double Ngon::area() const
	{
		if (coords.size() < 5)
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return 0.0;
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

		return std::abs(res) * Constant::Numberic::DIVIDE_BY_TWO;
	}
}