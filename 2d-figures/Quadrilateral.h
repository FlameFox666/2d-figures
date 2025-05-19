#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас, що описує чотирикутники.
	class Quadrilateral : public Polygon 
	{
	protected:
		double diagonal[2] = { 0.0, 0.0 }; // Діагоналі чотирикутника.
	public:
		// Конструктор за замовчуванням.
		Quadrilateral();

		Quadrilateral(
			const std::string& name,
			const Coords& first,
			const Coords& second,
			const Coords& third,
			const Coords& fourth
		);

		Quadrilateral(
			const std::string& name,
			const Coords* coords
		);
		
		// TODO: весь остальной сранный класс.

		// Конструктор з параметрами.

		double perimeter() const override;

		double area() const override;

	private:
		// Приватний метод, що обраховує довжини діагоналей.
		// Використовує Polygon::MeasureDistance() для скорочення повторення
		// коду в конструкторах.
		void MeasureDiagonals();
	};
}
