#include "Figure/Figure.h"

using Area2D::Constant::Message;

namespace Area2D 
{

	Figure::Figure() 
		: name(Message::FIGURE_NAME_PLACEHOLDER), 
		  coords() {}

	Figure::Figure(
		const std::string& name, 
		const std::vector<Coords>& coords
	) 
		: name(name), coords(coords) {}

	std::string Figure::getName() const 
	{
		return this->name;
	}

	void Figure::setName(const std::string& name) 
	{
		this->name = name;
	}

	const std::vector<Coords>& Figure::getCoords() const
	{
		return coords;
	}

	void Figure::setCoords(const std::vector<Coords>& ñoords) 
	{
		this->coords = ñoords;
	}

	void Figure::setCoords(const Coords* coords, size_t size) 
	{
		this->coords.assign(coords, coords + size);
	}
}