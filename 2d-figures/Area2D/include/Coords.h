#pragma once
#include <ostream>
#include <istream>

namespace Area2D 
{
	// Клас, що зберігає точку у 2D просторі.
	// Зберігає координати точки (x, y), надає методи для доступу до них.
	class Coords 
	{
	private:
		double x;
		double y;

	public:
		// Конструктор за замовчуванням: встановлює координати (0.0, 0.0).
		Coords();

		// Конструктор з параметрами.
		Coords(double x, double y);

		// Деструктор: не виконує додаткових дій.
		~Coords();

		// Повертає координату Х точки.
		double getX() const;

		// Повертає координату Y точки.
		double getY() const;

		// Встановлює нове значення координати Х.
		void setX(double x);

		// Встановлює нове значення координати Y.
		void setY(double y);

		// Виводить координати точки в консоль у форматі (x, y).
		friend std::ostream& operator<<(std::ostream& os, const Coords& point);

		// Зчитує координати з вхідного потоку 
		// у вигляді двох значень типу double.
		friend std::istream& operator>>(std::istream& is, Coords& point);

		// Порівнює дві точки на рівність.
		bool operator==(const Coords& other) const;

		// Порівнює дві точки на нерівність.
		bool operator!=(const Coords& other) const;

		// Дружні класи, які можуть отримати доступ 
		// до приватних членів класу Coords.
		friend class Polygon;
		friend class Quadrilateral;
		friend class Ngon;
		friend class Oval;
	};
}
