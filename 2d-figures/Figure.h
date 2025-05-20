#pragma once
#include "Coords.h"
#include <string>
#include "Message.h"
#include "Numberic.h"
#include <vector>

namespace Area2D 
{
	// Абстрактний клас для всіх фігур.
	class Figure 
	{
	protected:
		std::string name;
		std::vector<Coords> coords;

	public:
		// Конструктор за замовчуванням.
		Figure();

		// Конструктор с вектором координат.
		Figure(
			const std::string& name, 
			const std::vector<Coords>& coords
		);

		 // Віртуальний деструктор.
		virtual ~Figure() = default;

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

