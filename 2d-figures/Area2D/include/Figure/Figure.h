#pragma once
#include "Coords.h"
#include "Constant/Error.h"
#include "Constant/Message.h"
#include "Constant/Numberic.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>


// Простір імен для біблотеки Area2D: 
// обрахування площи для 2D геометричних фігур.
namespace Area2D 
{
	// Абстрактний базовий клас для всіх 2D геометричних фігур.
	// Містить віртуальні методи для обчислення периметру, площі 
	// та відображення координат фігури.
	class Figure 
	{
	protected:
		std::string name;
		std::vector<Coords> coords;

	public:
		// Конструктор за замовчуванням: 
		// встановлює тимчасову назву та нуль координати.
		Figure();

		// Конструктор з параметрами: вектор координат.
		Figure(
			const std::string& name, 
			const std::vector<Coords>& coords
		);

		// Віртуальний деструктор: не виконує додаткових дій.
		// Дозволяє безпечне видалення об'єктів похідних класів.
		virtual ~Figure() = default;

		// Повертає назву фігури.
		std::string getName() const;
		
		// Повертає вектор координат фігури.
		const std::vector<Coords>& getCoords() const;

		// Встановлює нову назву для фігури.
		void setName(const std::string& name);

		// Чисто віртуальна функція для обчислення периметру.
		virtual double perimeter() const = 0; 

		// Чисто віртуальна функція для обчислення площі.
		virtual double area() const = 0;
	
		// Чисто віртуальна функція для відображення координат фігури.
		virtual void printCoords() const = 0;
	};
}