#include "Polygon.h"

namespace Area2D 
{
	Polygon::Polygon() : Figure(), lines() {}

	Polygon::Polygon(
		const std::string& name, 
		const std::vector<Coords>& coordsArray
	) 
		: Figure(name, coordsArray), lines() 
	{
		if (coordsArray.size() < 3) 
		{
			std::cerr << Constant::Error::POLYGON_LESS_THAN_THREE_COORDINATES;
			return;
		}

		if (coords.size() > 1) 
		{
			lines.resize(coords.size());
			for (size_t i = 0; i < coords.size(); i++) 
			{
				size_t j = (i + 1) % coords.size();
				lines[i] = MeasureDistance(coords[i], coords[j]);
			}
		}
	}

	const std::vector<double>& Polygon::getLine() const 
	{
		return lines;
	}

	double Polygon::MeasureDistance(
		const Coords& first, 
		const Coords& second) const 
	{
		return sqrt(
			pow(second.x - first.x, Constant::Numberic::POWER_OF_TWO) +
			pow(second.y - first.y, Constant::Numberic::POWER_OF_TWO)
		);
	}

	void Polygon::printCoords() const 
	{
		if (coords.empty()) 
		{
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return;
		}

		std::cout << name << Constant::Message::COORDINATES_PRINT;

		for (const auto& i : coords) 
		{
			std::cout << i << "\n";
		}
	}
}
