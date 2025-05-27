#pragma once
#include "Ellipse.h"
#include "Sector.h"

namespace Area2D
{
	// Клас представляє геометричну фігуру: сектор еліпса, заданий центром, 
	// радіусами самої вузької частини фігури та самої широкої частини 
	// та кутом сектора.
	// Містить методи для обчислення довижини окружності та площі сектора еліпса.
	class EllipseSector : protected Ellipse, private Sector
	{
	public:
		// Конструктор за замовчуванням.
		EllipseSector();

		// Конструктор з передачою початкового еліпса та кута у радіанах.
		EllipseSector(const Ellipse ellipse, double radian);

		// Конструктор з передачою початкового еліпса та кута у градусах.
		EllipseSector(const Ellipse ellipse, int degree);

		// Конструктор з передачою координат центра еліпса, 
		// радіуса та кута у радіанах.
		EllipseSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2,
			double radian
		);

		// Конструктор з передачою координат центра еліпса, 
		// радіуса та кута у градусах.
		EllipseSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2,
			int degree
		);

		// Конструктор з передачою координат через std::vector, 
		// та кута у радіанах.
		EllipseSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			double radian
		);

		// Конструктор з передачою координат через std::vector, 
		// та кута у градусах.
		EllipseSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			int degree
		);

		// Обчислення периметра сектора еліпса.
		double perimeter() const override;

		// Обчислення площі сектора еліпса.
		double area() const override;

		// Повертає кут.
		using Sector::getAngle;

		// Повертає назву фігури.
		using Ellipse::getName;

		// Повертає довжину радіусу.
		using Ellipse::getRadius;

		// Повертає координати.
		using Ellipse::getCoords;

		// Виводить координати кола.
		using Ellipse::printCoords;

		// Повертає координати кола.
		using Ellipse::setCoords;

	private:
		// Обчислення периметра сектора еліпса у градусах.
		// Формула: P = 2 * sqrt((a^2  + b^2 ) / 2) + 
		//			    кут / 360 * P еліпса
		double degreePerimeter() const;

		// Обчислення периметра сектора еліпса у радіанах.
		// Формула: P = 2 * sqrt((a^2  + b^2) / 2) + 
		//			    кут / 2PI * P еліпса
		double radianPerimeter() const;

		// Обчислення площі сектора еліпса у градусах.
		// Формула: S = (2PI * r1 * r2 * кут) / 360
		double degreeArea() const;

		// Обчислення площі сектора еліпса у радіанах.
		// Формула: S = (r1 * r2 * кут) / 2
		double radianArea() const;
	};
}
