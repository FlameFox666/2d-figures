#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Представляє геометричну фігуру — багатокутник, представлений
	// від п'яти координат та більше. Містить методи для обчислення  
	// периметру та площі опуклих багатокутників.
	class Ngon : public Polygon
	{
	public:
		Ngon();

		// Конструктор, що приймає вектор координат.
		Ngon(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Пошук периметру багатокутника.
		double perimeter() const override;

		// Пошук площі багатокутника за формулою Гаусса.
		double area() const override;
	};

}
