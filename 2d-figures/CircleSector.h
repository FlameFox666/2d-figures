#pragma once
#include "Circle.h"
#include "Sector.h"

namespace Area2D
{
	class CircleSector : protected Circle, private Sector
	{
	public:

		CircleSector();

		CircleSector(const Circle circle, double radian);

		CircleSector(const Circle circle, int degree);

		CircleSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius,
			double radian
		);

		CircleSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius, 
			int degree
		);

		CircleSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			double radian
		);

		CircleSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			int degree
		);

		// Пошук отримання довжини окружності сектора кола.
		double perimeter() const override;

		// Пошук отримання площі сектора кола.
		double area() const override;

		// Повертає радіану.
		using Sector::getRadian;

		// Повертає градус.
		using Sector::getDegree;

		// Повертає назву фігури.
		using Circle::getName;

		// Повертає довжину радіусу.
		using Circle::getRadius;

		// Повертає координати.
		using Circle::getCoords;

		// Повертає координати кола.
		using Circle::printCoords;
	
	private:
		// Вимірює периметр сектора кола в градусах.
		// Формула: 2r * кут/360 * 2PI * r
		double degreePerimeter() const;

		// Вимірює периметр сектора кола в радіанах.
		// Формула: 2r + r * кут
		double radianPerimeter() const;

		// Вимірює площу сектора кола в градусах.
		// Формула: кут/360 * PI * r^2
		double degreeArea() const;

		// Вимірює площу сектора кола в радіанах.
		// Формула: 1/2 * r^2 * кут
		double radianArea() const;
	};
}
