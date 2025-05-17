#include "Figure.h"

namespace Area2D {
	Figure::Figure() : size(1), coords( new Coords[size]{ Coords() } ) {}

	Figure::Figure(const Coords* coordsArray, int count) : size(count) {
		coords = new Coords[size];
		for (int i = 0; i < size; ++i) {
			coords[i] = coordsArray[i];
		}
	}

	Figure::Figure(const Figure& other) : size(other.size) {
		coords = new Coords[size];
		for (int i = 0; i < size; ++i) {
			coords[i] = other.coords[i];
		}
	}

	Figure::~Figure() {
		delete[] coords;
	}

	Figure& Figure::operator=(const Figure& other) {
		if (this != &other) {
			delete[] coords;
			size = other.size;
			coords = new Coords[size];
			for (int i = 0; i < size; ++i) {
				coords[i] = other.coords[i];
			}
		}
		return *this;
	}
}