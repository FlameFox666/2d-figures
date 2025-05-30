#pragma once
#include "Constant/Numberic.h"
#include "Constant/Error.h"
#include <iostream>

namespace Area2D 
{
	// Абстрактний базовий клас для всіх секторів 2D геометричних 
	// овальних фігур.
	// Містить кут сектору.
	class Sector 
	{
	protected:
		double radian;
		int degree;

	public:
		// Базовий конструктор.
		Sector();

		// Конструктор, що приймає радіану як градусну міру.
		Sector(double radian);

		// Конструктор, що приймає градус як градусну міру.
		Sector(int degree);

		// Повертає кут.
		double getAngle() const;

		// Встановлює кут у градусах.
		void setAngle(int degree);

		// Встановлює кут у радіанах.
		void setAngle(double radian);
	};
}