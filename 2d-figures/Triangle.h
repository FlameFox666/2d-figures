#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас, що описує трикутник.
	class Triangle : public Polygon 
	{
	public:
		// Конструктор за замовчуванням.
		Triangle();

		// Конструктор з передачою координат через три окремі параметри.
		Triangle(
			const std::string& name,
			const Coords& first,
			const Coords& second,
			const Coords& third
		);
		
		// Конструктор з передачою координат через масив.
		Triangle(
			const std::string& name, 
			const Coords* coords
		);

		// Метод для отримання периметру трикутника.
		double perimeter() const override;

		// Метод для отримання площі трикутника.
		double area() const override;
	};
}

