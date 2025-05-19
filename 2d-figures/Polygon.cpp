#include "Polygon.h"
#include <iostream>
#include <cmath>

namespace Area2D 
{
	Polygon::Polygon() : Figure(), lines(nullptr) {}

	Polygon::Polygon(
		const std::string& name, 
		const Coords* coordsArray, 
		int size
	) 
		: Figure(name, coordsArray, size), lines(nullptr) 
	{
		if (size < 3) {
			std::cerr << Constant::Error::POLYGON_LESS_THAN_THREE_COORDINATES;
			return;
		}

		if (size > 1) {
			lines = new double[size];
			for (int i = 0; i < size; i++) {
				int j = (i + 1) % size;
				lines[i] = MeasureDistance(coords[i], coords[j]);
			}
		}
	}

	Polygon::Polygon(const Polygon& other) : Figure(other), lines(nullptr) 
	{
		if (other.size > 1) {
			lines = new double[other.size];
			for (int i = 0; i < other.size; i++) {
				lines[i] = other.lines[i];
			}
		}
	}

	Polygon& Polygon::operator=(const Polygon& other) 
	{
		if (this != &other) {
			Figure::operator=(other);
			delete[] lines;
			name = other.name;
			lines = nullptr;
			if (other.size > 1) {
				lines = new double[other.size];
				for (int i = 0; i < other.size; i++) {
					lines[i] = other.lines[i];
				}
			}
		}
		return *this;
	}

	Polygon::~Polygon() 
	{
		delete[] lines;
	}

	double* Polygon::getLine() const 
	{
		return lines;
	}

	double Polygon::MeasureDistance(
		const Coords& first, 
		const Coords& second) const 
	{
		return sqrt(
			pow(second.x - first.x, POWER_OF_TWO) +
			pow(second.y - first.y, POWER_OF_TWO)
		);
	}

	void Polygon::printCoords() const 
	{
		if (coords == nullptr) {
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
			return;
		}

		std::cout << name << Constant::Message::COORDINATES_PRINT;

		for (int i = 0; i < size; i++) {
			std::cout << coords[i] << "\n";
		}
	}
}
