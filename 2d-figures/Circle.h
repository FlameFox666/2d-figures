#pragma once
#include "Oval.h"

namespace Area2D 
{
	// Представляє геометричну фігуру - коло, заданий центром та радіусом.
	// Містить методи для обчислення довижини окружності та площі кола.
	class Circle : public Oval 
	{
	public:
		// Конструктор за замовчуванням.
		Circle();

		// Конструктор з передачою координат через три окремі параметри.
		Circle(
			const std::string& name,
			const Coords& center,
			const Coords& radius
		);

		// Конструктор з передачою координат через std::vector.
		Circle(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Конструктор з передачою координат через звичайний масив.
		Circle(
			const std::string& name,
			const Coords* coords
		);

		// Пошук отримання довжини окружності кола.
		double perimeter() const override;

		// Пошук отримання площі кола.
		double area() const override;
	};
}

