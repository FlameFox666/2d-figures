#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас, що описує трикутник.

	// Представляє геометричну фігуру - трикутник, заданий трьома вершинами.
	// Містить методи для обчислення периметру та площі трикутника.
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
		
		// Конструктор з передачою координат через std::vector.
		Triangle(
			const std::string& name, 
			const std::vector<Coords>& coords
		);

		// Конструктор з передачою координат через звичайний масив.
		Triangle(
			const std::string& name,
			const Coords* coords
		);

		// Пошук отримання периметру трикутника.
		double perimeter() const override;

		// Пошук отримання площі трикутника.
		double area() const override;
	};
}

