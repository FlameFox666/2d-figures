#pragma once
#include "Oval.h"

namespace Area2D 
{
	// Клас представляє геометричну фігуру: коло, заданий центром та радіусом.
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

		// Делегуючий конструктор з передачою координат через звичайний масив.
		Circle(
			const std::string& name,
			const Coords* coords
		);

		// Обчислення периметра кола.
		// Формула: P = 2 * PI * r.
		double perimeter() const override;

		// Обчислення площі кола.
		// Формула: S = PI * r^2.
		double area() const override;

		// Перевантаження встановлення координат для кола.
		void setCoords(const std::vector<Coords>& сoords) override;
		void setCoords(const Coords* coords, size_t size) override;
	};
}

