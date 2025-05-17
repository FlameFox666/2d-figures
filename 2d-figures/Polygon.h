#pragma once
#include "Figure.h"

namespace Area2D {
	// Абстрактний клас, що описує фігури з вершинами та сторонами.
	class Polygon : public Figure {
	protected:
		double* lines;
	public:
		// Конструктор по замовчуванню.
		Polygon();
		
		// Конструктор з обрахуванням довжини ліній.
		Polygon(const Coords* coordsArray, int count);
		
		virtual ~Polygon();

	private:
		double MeasureDistance(const Coords& first, const Coords& second) const;
	};

}

