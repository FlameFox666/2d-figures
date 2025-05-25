#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// Клас представляє геометричну фігуру: багатокутник, заданий п'ятью та
	// більше вершинами.
	// Містить методи для обчислення периметру та площі опуклих багатокутників.
	class Ngon : public Polygon
	{
	public:
		// Конструктор за замовчуванням.
		Ngon();

		// Конструктор з передачою координат через std::vector.
		Ngon(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// Делегуючий конструктор з передачою координат через звичайний масив.
		Ngon(
			const std::string& name,
			const Coords* coords,
			int size
		);

		// Обчислення периметра трикутника.
		// Формула: P = i[1] + i[2] + ... + i [n-1] + i[n].
		double perimeter() const override;

		// Пошук площі багатокутника за .

		// Обчислення площі трикутника.
		// Формула: формула Гаусса 
		// S = 0.5 * |сума (x[i] * y[i+1] - x[i+1] * y[i]) для всіх i|.
		double area() const override;
	};
}
