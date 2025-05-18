#pragma once
#include <ostream>
#include <istream>

namespace Area2D 
{
	// Клас, що представляє точку в 2D просторі.
	class Coords 
	{
	private:
		double x;
		double y;

	public:
		// Конструктор за замовчуванням, що ініціалізує координати до нуля.
		Coords();

		// Конструктор, що приймає два параметри для ініціалізації координат.
		Coords(double x, double y);

		~Coords() {}

		// Повертає Х координату точки.
		double getX() const;

		// Повертає Y координату точки.
		double getY() const;

		// Встановлює нове значення для Х координати.
		void setX(double x);

		// Встановлює нове значення для Y координати.
		void setY(double y);

		// Виводить координати точки в консоль у форматі (x, y).
		friend std::ostream& operator<<(std::ostream& os, const Coords& point);

		// Зчитує координати з вхідного потоку 
		// у вигляді двох значень типу double.
		friend std::istream& operator>>(std::istream& is, Coords& point);

		friend class Polygon;
	};
}
