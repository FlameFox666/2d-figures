#include "Polygon.h"
#include <cmath>

namespace Area2D {
	Polygon::Polygon() : Figure(), lines(nullptr) {}

	Polygon::Polygon(const Coords* coordsArray, int count) : lines(nullptr) {
		if (size > 1) {
			lines = new double[size];
			for (int i = 0; i < size; ++i) {
				int j = (i + 1) % size;
				lines[i] = MeasureDistance(coords[i], coords[j]);
			}
		}
	}

	Polygon::~Polygon() {
		delete[] lines;
	}

	double Polygon::MeasureDistance(
		const Coords & first, const Coords & second
	) const {
		return sqrt(
			pow(first.getX() - second.getX(), 2) +
			pow(first.getY() - second.getY(), 2)
		);
	}

}
