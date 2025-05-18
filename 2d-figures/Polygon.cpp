#include "Polygon.h"
#include <iostream>
#include <cmath>

namespace Area2D {
	Polygon::Polygon() : Figure(), lines(nullptr) {}

	Polygon::Polygon(
		const std::string& name, 
		const Coords* coordsArray, 
		int size
	) : Figure(name, coordsArray, size), lines(nullptr) {
		if (size < 3) {
			std::cerr << "Polygon must have at least 3 coordinates.\n";
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

	Polygon::Polygon(const Polygon& other) : Figure(other), lines(nullptr) {
		if (other.size > 1) {
			lines = new double[other.size];
			for (int i = 0; i < other.size; i++) {
				lines[i] = other.lines[i];
			}
		}
	}

	Polygon& Polygon::operator=(const Polygon& other) {
		if (this != &other) {
			Figure::operator=(other);
			delete[] lines;
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

	Polygon::~Polygon() {
		delete[] lines;
	}

	double Polygon::MeasureDistance(
		const Coords& first, 
		const Coords& second) const {
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

		cout << name << "'s coordinates:\n";

		for (int i = 0; i < size; i++) {
			cout << coords[i] << "\n";
		}
	}
}
