#pragma once
#include "Circle.h"
#include "Sector.h"

namespace Area2D
{
	// Клас представляє геометричну фігуру: сектор кола, заданий центром, 
	// радіусом та кутом сектора.
	// Містить методи для обчислення довижини окружності та площі сектора кола.
	class CircleSector : protected Circle, private Sector
	{
	public:
		// Конструктор за замовчуванням.
		CircleSector();

		// Конструктор з передачою початкового кола та кута у радіанах.
		CircleSector(const Circle circle, double radian);

		// Конструктор з передачою початкового кола та кута у градусах.
		CircleSector(const Circle circle, int degree);

		// Конструктор з передачою координат центра кола, 
		// радіуса та кута у радіанах.
		CircleSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius,
			double radian
		);

		// Конструктор з передачою координат центра кола, 
		// радіуса та кута у градусах.
		CircleSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius, 
			int degree
		);

		// Конструктор з передачою координат через std::vector, 
		// та кута у радіанах.
		CircleSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			double radian
		);

		// Конструктор з передачою координат через std::vector, 
		// та кута у градусах.
		CircleSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			int degree
		);

		// Обчислення периметра сектора кола.
		double perimeter() const override;

		// Обчислення площі сектора кола.
		double area() const override;

		// Повертає кут.
		using Sector::getAngle;

		// Встановлює кут.
		using Sector::setAngle;

		// Повертає назву фігури.
		using Circle::getName;

		// Повертає довжину радіусу.
		using Circle::getRadius;

		// Повертає координати.
		using Circle::getCoords;

		// Виводить координати кола.
		using Circle::printCoords;
		
		// Повертає координати кола.
		using Circle::setCoords;
		
	private:
		// Обчислення периметра сектора кола у градусах.
		// Формула: 2r * кут/360 * 2PI * r
		double degreePerimeter() const;

		// Обчислення периметра сектора кола у радіанах.
		// Формула: 2r + r * кут
		double radianPerimeter() const;

		// Обчислення площі сектора кола у градусах.
		// Формула: кут/360 * PI * r^2
		double degreeArea() const;

		// Обчислення площі сектора кола у радіанах.
		// Формула: 1/2 * r^2 * кут
		double radianArea() const;
	};
}
