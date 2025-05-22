#pragma once
#include "Figure.h"

namespace Area2D 
{
	// Абстрактний клас, що представляє фігури з вершинами
	// та сторонами. Містить методи для виведення всіх
	// вершин фігури та довжини його сторін.
	class Polygon : public Figure 
	{
	protected:
		std::vector<double> lines;

	public:
		// Конструктор по замовчуванню.
		Polygon();
		
		// Конструктор з обрахуванням довжини ліній.
		Polygon(
			const std::string& name, 
			const std::vector<Coords>& coords
		);
		
		virtual ~Polygon() = default;

		// Повертає вектор сторін фігури.
		const std::vector<double>& getLine() const;

		// Виводить координати фігури.
		void printCoords() const override;

	protected:
		// Виміряє відстань між двома координатами.
		double MeasureDistance(
			const Coords& first, 
			const Coords& second
		) const;
	};

}