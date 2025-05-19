#pragma once
#include "Figure.h"
#include "Error.h"
#include "Message.h"

namespace Area2D 
{
	// Абстрактний клас, що представляє фігури з вершинами
	// та сторонами. Містить методи для виведення всіх
	// вершин фігури та довжини його сторін.
	class Polygon : public Figure 
	{
	protected:
		double* lines;
	public:
		// Конструктор по замовчуванню.
		Polygon();
		
		// Конструктор з обрахуванням довжини ліній.
		Polygon(
			const std::string& name, 
			const Coords* coordsArray, 
			int size
		);
		
		// Конструктор копіювання.
		Polygon(const Polygon& other);

		Polygon& operator=(const Polygon& other);

		virtual ~Polygon();

		// Повертає масив сторін фігури.
		double* getLine() const;

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