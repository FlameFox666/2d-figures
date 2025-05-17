#include "Coords.h"

namespace Area2D {
	Coords::Coords() : x(0.0), y(0.0) {}

	Coords::Coords(double x, double y) : x(x), y(y) {}

	double Coords::getX() const {
		return x;
	}

	double Coords::getY() const {
		return y;
	}

	void Coords::setX(double x) {
		this->x = x;
	}

	void Coords::setY(double y) {
		this->y = y;
	}

	std::ostream& operator<<(std::ostream& os, const Coords& point) {
		os << "(" << point.x << ", " << point.y << ")";
		return os;
	}

	std::istream& operator>>(std::istream& is, Coords& point) {
		is >> point.x >> point.y;
		return is;
	}

}