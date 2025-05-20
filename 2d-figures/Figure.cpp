#include "Figure.h"

namespace Area2D 
{
	Figure::Figure() 
		: name(Constant::Message::FIGURE_NAME_PLACEHOLDER), 
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
}