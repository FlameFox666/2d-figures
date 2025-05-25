#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас представляє геометричну фігуру: трикутник, заданий трьома вершинами.
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

		// Делегуючий конструктор з передачою координат через звичайний масив.
		Triangle(
			const std::string& name,
			const Coords* coords
		);

		// Обчислення периметра трикутника.
		// Формула: P = a + b + c.
		double perimeter() const override;

		// Обчислення площі трикутника.
		// Формула: формула Герона — S = sqrt(p * (p - a) * (p - b) * (p - c)).
		double area() const override;
	};
}

