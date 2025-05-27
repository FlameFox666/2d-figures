#pragma once
#include "Oval.h"

namespace Area2D 
{
	// Клас представляє геометричну фігуру: еліпс, заданий центром та 
	// радіусами самої вузької частини фігури та самої широкої частини.
	// Містить методи для обчислення довижини окружності та площі еліпса.
	class Ellipse : public Oval 
	{
	public:
		// Конструктор за замовчуванням.
		Ellipse();

		// Конструктор з передачою координат через три окремі параметри.
		Ellipse(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2
		);

		// Конструктор з передачою координат через std::vector.
		Ellipse(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Делегуючий конструктор з передачою координат через звичайний масив.
		Ellipse(
			const std::string& name,
			const Coords* coords
		);

		// Обчислення периметра еліпса.
		// Формула: формула Раману
		// P = PI * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)).
		double perimeter() const override;

		// Обчислення площі еліпса.
		// Формула: S = PI * a * b.
		double area() const override;

		// Перевантаження встановлення координат для еліпсу.
		void setCoords(const std::vector<Coords>& сoords) override;
		void setCoords(const Coords* coords, size_t size) override;
	};
}

