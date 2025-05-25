#pragma once
#include "../Figure.h"

namespace Area2D 
{
	// Абстрактний клас для всіх 2D геометричних фігур 
	// з вершинами та сторонами. 
	// Містить методи для відображення всіх вершин фігури 
	// та довжин його сторін.
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
		
		// Віртуальний деструктор: не виконує додаткових дій.
		// Дозволяє безпечне видалення об'єктів похідних класів.
		virtual ~Polygon() = default;

		// Повертає вектор сторін фігури.
		const std::vector<double>& getLine() const;

		// Повертає окрему сторону фігури за індексом.
		double operator[](size_t index) const;

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