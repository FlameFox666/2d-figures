#include "Polygon.h"
#include <iostream>
#include <cmath>

namespace Area2D {
	Polygon::Polygon() : Figure(), lines(nullptr) {}

	Polygon::Polygon(const Coords* coordsArray, int count) : Figure(coordsArray, count), lines(nullptr) {
		if (size > 1) {
			lines = new double[size];
			for (int i = 0; i < size; i++) {
				int j = (i + 1) % size;
				lines[i] = MeasureDistance(coords[i], coords[j]);
			}
		}
	}

	Polygon::~Polygon() {
		delete[] lines;
	}

	double Polygon::MeasureDistance(
		const Coords& first, 
		const Coords& second
	) const {
		return sqrt(
			pow(second.x - first.x, 2) +
			pow(second.y - first.y, 2)
		);
	}

	void Polygon::printCoords() const {
		using std::cout;

		if (coords == nullptr) {
			cout << "No coordinates available.\n";
			return;
		}

		cout << "Figure's coordinates:\n";

		for (int i = 0; i < size; i++) {
			cout << coords[i] << "\n";
		}
	}
}
