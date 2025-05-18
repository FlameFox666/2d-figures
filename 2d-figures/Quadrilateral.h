#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас, що описує чотирикутники.
	class Quadrilateral : public Polygon 
	{
	public:
		// Конструктор за замовчуванням.
		Quadrilateral();

		// TODO: весь остальной сранный класс.

		// Конструктор з параметрами.

		double perimeter() const override;

		double area() const override;
	};
}
