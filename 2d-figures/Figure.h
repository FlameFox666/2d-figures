#pragma once
#include "Coords.h"
#include <string>

namespace Area2D 
{
	// Абстрактний клас для всіх фігур.
	class Figure 
	{
	private:
		static constexpr const char* NAME_PLACEHOLDER = "Figure";
	protected:
		static constexpr float DIVIDER = 0.5f;
		static constexpr int POWER_OF_TWO = 2;
		std::string name;
		Coords* coords;
		int size;

	public:
		// Конструктор за замовчуванням.
		Figure();
		
		// Конструктор с массивом координат.
		Figure(
			const std::string& name, 
			const Coords* coords_, 
			int size
		);

		// Конструктор копіювання.
		Figure(const Figure& other); 

		// Оператор присвоєння.
		Figure& operator=(const Figure& other);

		// Чисто віртуальний деструктор для 
		// корректного видалення об'єктів похідних класів.
		virtual ~Figure();

		// Повертає назву фігури.
		std::string getName() const;
		
		// Встановлює назву фігури.
		void setName(const std::string& name);

		// Чисто віртуальна функція для обчислення периметру.
		virtual double perimeter() const = 0; 

		// Чисто віртуальна функція для обчислення площі.
		virtual double area() const = 0;
	
		// Чисто віртуальна функція для відображення координат фігури.
		virtual void printCoords() const = 0;
	};
}

