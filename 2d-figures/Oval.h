#pragma once
#include "Figure.h"
#include <array>

namespace Area2D 
{
	enum class CoordsIndex
	{
		CENTER, HORIZONTAL_RADIUS, VERTICAL_RADIUS
	};

	inline int toInt(CoordsIndex index)
	{
		return static_cast<int>(index);
	}

	// Абстрактний клас для всіх 2D геометричних округлих фігур 
	// Містить методи для відображення всіх радіусів фігури.
	class Oval : public Figure 
	{
	protected:
		std::array<double, 2> radius;

	public:
		// Конструктор по замовчуванню.
		Oval();

		// Конструктор з обрахуванням радіусів.
		Oval(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Віртуальний деструктор: не виконує додаткових дій.
		// Дозволяє безпечне видалення об'єктів похідних класів.
		virtual ~Oval() = default;

		// Повертає вектор радіусів фігури.
		const std::array<double, 2>& getRadius() const;

		const double& operator[](size_t index) const;

		// Виводить координати центра та перпендикулярних радіусів.
		void printCoords() const override;
	};
}


