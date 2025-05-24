#pragma once
#include "Ellipse.h"
#include "Sector.h"

namespace Area2D
{
	class EllipseSector : protected Ellipse, private Sector
	{
	public:

		EllipseSector();

		EllipseSector(const Ellipse ellipse, double radian);

		EllipseSector(const Ellipse ellipse, int degree);

		EllipseSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2,
			double radian
		);

		EllipseSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2,
			int degree
		);

		EllipseSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			double radian
		);

		EllipseSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			int degree
		);

		// Пошук отримання довжини окружності сектора еліпса.
		double perimeter() const override;

		// Пошук отримання площі сектора еліпса.
		double area() const override;

		// Повертає радіану.
		using Sector::getRadian;

		// Повертає градус.
		using Sector::getDegree;

		// Повертає назву фігури.
		using Ellipse::getName;

		// Повертає довжину радіусу.
		using Ellipse::getRadius;

		// Повертає координати.
		using Ellipse::getCoords;

	private:
		// Вимірює периметр сектора еліпса в градусах.
		// Формула: 2 * sqrt((горизонт.r^2  + верт.r^2 ) / 2) + 
		//			кут / 360 * периметр
		double degreePerimeter() const;

		// Вимірює периметр сектора еліпса в радіанах.
		// Формула: 2 * sqrt((горизонт.r^2  + верт.r^2) / 2) + 
		//			кут / 2PI * периметр
		double radianPerimeter() const;

		// Вимірює площу сектора еліпса в градусах.
		// Формула: (2PI * r1 * r2 * кут) / 360
		double degreeArea() const;

		// Вимірює площу сектора еліпса в радіанах.
		// Формула: 0.5 * r1 * r2 * кут
		double radianArea() const;
	};
}
