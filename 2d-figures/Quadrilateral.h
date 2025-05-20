#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Представляє геометричну фігуру — чотирикутник, представлений
	// чотирьма координатами. Містить методи для обчислення  
	// периметру та площі опуклих чотирикутників.
	class Quadrilateral : public Polygon 
	{
	protected:
		double diagonal[2] = { 0.0, 0.0 }; // Діагоналі чотирикутника.
	public:
		// Конструктор за замовчуванням.
		Quadrilateral();

		// Конструктор з передачею назви та координат поодинично.
		Quadrilateral(
			const std::string& name,
			const Coords& first,
			const Coords& second,
			const Coords& third,
			const Coords& fourth
		);

		// Конструктор з передачею назви та вектору координат.
		Quadrilateral(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Пошук периметра чотирикутника.

		double perimeter() const override;

		// Пошук площі чотирикутника за діагоналями.
		double area() const override;

	private:
		// Приватний метод, що обраховує довжини діагоналей.
		// Використовує Polygon::MeasureDistance() для скорочення повторення
		// коду в конструкторах.
		void MeasureDiagonals();
	};
}
