#include "Polygon.h"

using Area2D::Constant::Error;
using Area2D::Constant::Message;
using Area2D::Constant::Numberic;

namespace Area2D 
{
	Polygon::Polygon() : Figure(), lines() {}

	Polygon::Polygon(
		const std::string& name, 
		const std::vector<Coords>& coords
	) 
		: Figure(name, coords), lines() 
	{
		if (coords.size() < Numberic::MINIMAL_POLYGON_VERTICES)
		{
			throw std::invalid_argument(
				Error::POLYGON_LESS_THAN_THREE_COORDINATES
			);
		}

		if (this->coords.size() > 1) 
		{
			lines.resize(this->coords.size());
			for (size_t i = 0; i < this->coords.size(); i++)
			{
				size_t j = (i + 1) % this->coords.size();
				lines[i] = MeasureDistance(this->coords[i], this->coords[j]);
			}
		}
	}

	const std::vector<double>& Polygon::getLine() const 
	{
		return lines;
	}

	double Polygon::MeasureDistance(
		const Coords& first, 
		const Coords& second
	) const 
	{
		return sqrt(
			pow(second.x - first.x, Numberic::POWER_OF_TWO) +
			pow(second.y - first.y, Numberic::POWER_OF_TWO)
		);
	}

	void Polygon::printCoords() const 
	{
		if (coords.empty()) 
		{
			throw std::invalid_argument(
				Error::UNAVAILABLE_COORDINATES
			);
		}

		std::cout << name << Message::COORDINATES_PRINT;

		for (const auto& coord : coords)
		{
			std::cout << coord << "\n";
		}
	}

	double Polygon::operator[](size_t index) const
	{
		return lines[index];
	}
}
