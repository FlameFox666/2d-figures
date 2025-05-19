#include "Figure.h"

namespace Area2D 
{
	Figure::Figure() 
		: name(NAME_PLACEHOLDER), size(0), coords(nullptr) {}

	Figure::Figure(
		const std::string& name, 
		const Coords* coords_, 
		int size
	) 
		: name(name), size(size) 
	{

		coords = new Coords[size];
		for (int i = 0; i < size; i++) {
			coords[i] = coords_[i];
		}
	}

	Figure::Figure(const Figure& other) 
		: name(other.name), size(other.size) 
	{
		coords = new Coords[size];
		for (int i = 0; i < size; i++) {
			coords[i] = other.coords[i];
		}
	}

	Figure& Figure::operator=(const Figure& other) 
	{
		if (this != &other) {
			delete[] coords;
			size = other.size;
			coords = new Coords[size];
			for (int i = 0; i < size; i++) {
				coords[i] = other.coords[i];
			}
		}
		return *this;
	}

	Figure::~Figure() 
	{
		delete[] coords;
	}

	std::string Figure::getName() const 
	{
		return this->name;
	}

	void Figure::setName(const std::string& name) 
	{
		this->name = name;
	}
}