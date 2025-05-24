#pragma once
#include "Figure.h"
#include <array>

namespace Area2D 
{
	// Абстрактний клас, що представляє округлі фігури.
	// Містить методи для виведення всіх радіусів фігури.
	class Oval : public Figure 
	{
	protected:
		std::array<double, 2> radius;

		enum class CoordsIndex 
		{
			CENTER, HORIZONTAL_RADIUS, VERTICAL_RADIUS
		};
	public:
		Oval();

		Oval(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		virtual ~Oval() = default;

		// Передає координати центру та радіус.
		const std::array<double, 2>& getRadius() const;

		// Виводить координати центра та перпендикулярного радіусу.
		void printCoords() const override;
	};
}


