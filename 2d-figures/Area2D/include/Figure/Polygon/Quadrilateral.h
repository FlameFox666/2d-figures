#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас представляє геометричну фігуру: чотирикутник, 
	// заданий чотирьма вершинами.
	// Містить методи для обчислення периметру та площі чотирикутників.
	class Quadrilateral : public Polygon 
	{
	protected:
		double diagonal[2] = { 0.0, 0.0 }; // Діагоналі чотирикутника.
	public:
		// Конструктор за замовчуванням.
		Quadrilateral();

		// Конструктор з передачею координат через чотири окремі параметри.
		Quadrilateral(
			const std::string& name,
			const Coords& first,
			const Coords& second,
			const Coords& third,
			const Coords& fourth
		);

		// Конструктор з передачею координат через std::vector.
		Quadrilateral(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Делегуючий конструктор з передачою координат через звичайний масив.
		Quadrilateral(
			const std::string& name,
			const Coords* coords
		);

		// Обчислення периметра чотирикутника.
		// Формула: P = a + b + c + d
		double perimeter() const override;

		// Обчислення площі чотирикутника.
		// Формула: S = (d1 * d2 * sin()) / 2
		double area() const override;

	private:
		// Приватний метод, що обраховує довжини діагоналей.
		// Використовує Polygon::MeasureDistance() для скорочення повторення
		// коду в конструкторах.
		void MeasureDiagonals();
	};
}
