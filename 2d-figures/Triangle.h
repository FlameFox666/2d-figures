#pragma once
#include "Polygon.h"

namespace Area2D {
	// Клас, що описує трикутник.
	class Triangle : public Polygon {
	private:

	public:
		Triangle();

		// По три точки и массив из трёх точек
		Triangle(
			const std::string& name, 
			const Coords& first, 
			const Coords& second, 
			const Coords& third
		);

		Triangle(const std::string name, const Coords* coords);

		double perimeter() const override;

		double area() const override;
	private:

	};

}

