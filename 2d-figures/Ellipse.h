#pragma once
#include "Oval.h"

namespace Area2D 
{
	// Представляє геометричну фігуру - еліпс, заданий центром та 
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

		// Конструктор з передачою координат через звичайний масив.
		Ellipse(
			const std::string& name,
			const Coords* coords
		);

		// Знаходить довжину окружності еліпса
		// через формулу Раману.
		double perimeter() const override;

		// Знаходить площу еліпса.
		double area() const override;
	};
}

