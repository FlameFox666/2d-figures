#pragma once
#include "Polygon.h"

namespace Area2D {
	// ����, �� ����� ���������.
	class Triangle : public Polygon {
	private:

	public:
		Triangle();

		// �� ��� ����� � ������ �� ��� �����
		Triangle(const Coords& first, const Coords& second, const Coords& third);

		Triangle(const Coords* coords);

		double perimeter() const override;

		double area() const override;
	private:

	};

}

