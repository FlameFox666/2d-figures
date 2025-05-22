#pragma once
#include "Coords.h"
#include "Error.h"
#include "Message.h"
#include "Numberic.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

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
		
		// Повертає вектор координат фігури.
		const std::vector<Coords>& getCoords() const;

		// Встановлює назву фігури.
		void setName(const std::string& name);

		// Чисто віртуальна функція для обчислення периметру.
		virtual double perimeter() const = 0; 

		// Чисто віртуальна функція для обчислення площі.
		virtual double area() const = 0;
	
		// Чисто віртуальна функція для відображення координат фігури.
		virtual void printCoords() const = 0;
	
	protected:
		// Перетворює дані в цілі числа. Служить для 
		// скорочення коду та його читабельності.
		template<typename T>
		int toInt(T value) const {
			return static_cast<int>(value);
		}
	};
}