#pragma once
#include "Numberic.h"
#include "Error.h"


namespace Area2D 
{
	// Абстрактний клас представляє сектор овальних фігур.
	// Містить методи для переведення радіан у градуса та навпаки.
	class Sector 
	{
	protected:
		enum class Measure 
		{ 
			RADIAN, 
			DEGREE
		};

		static inline bool measure = static_cast<int>(Measure::DEGREE);
		double radian;
		int degree;

	public:
		// Базовий конструктор.
		Sector();

		// Конструктор, що приймає радіану як градусну міру.
		Sector(double radian);

		// Конструктор, що приймає градус як градусну міру.
		Sector(int degree);

		// Повертає радіану.
		double getRadian() const;

		// Повертає градус.
		int getDegree() const;

		// Повертає радіану у градусах.
		double degreeToRadian() const;

		// Повертає градус у радіанах.
		int radianToDegree() const;
		
		// Змінює градусну міру. 
		static void setMeasure(Measure value) 
		{
			measure = static_cast<int>(value);
		}
	};

}