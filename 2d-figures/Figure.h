#pragma once
#include "Coords.h"

namespace Area2D {
	// Базовий абстрактний клас для всіх фігур.
	class Figure {
	protected:
		Coords* coords;
		int size; // Кількість координат (точок) фігури.

	public:
		// Конструктор за замовчуванням.
		Figure();
		
		// Конструктор с массивом координат.
		Figure(const Coords* coordsArray, int count);

		// Конструктор копіювання.
		Figure(const Figure& other); 

		// Оператор присвоєння.
		Figure& operator=(const Figure& other); 

		// Чисто віртуальний деструктор для корректного видалення об'єктів похідних класів.
		virtual ~Figure();

		// Чисто віртуальна функція для обчислення периметру.
		virtual double perimeter() const = 0; 

		// Чисто віртуальна функція для обчислення площі.
		virtual double area() const = 0;
	};
}

