#pragma once
#include "Coords.h"

namespace Area2D {
	// Базовий клас для всіх фігур.
	class Figure {
	protected:
		Coords coords;

	public:
		// 
		Figure();
		//Figure();

		// Чисто віртуальний деструктор для корректного видалення об'єктів похідних класів.
		virtual ~Figure();

		// Чисто віртуальна функція для обчислення площі.
		virtual double area() const = 0;
	};
}

