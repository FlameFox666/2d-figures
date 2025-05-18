#pragma once
#include "Polygon.h"

namespace Area2D {
	// ����, �� ����� ���������.
	class Triangle : public Polygon {
	private:

	public:
		Triangle();

		// �� ��� ����� � ������ �� ��� �����
		Triangle(
			const std::string& name, 
			const Coords& first, 
			const Coords& second, 
			const Coords& third
		);

		Triangle(const std::string name, const Coords* coords);

		double perimeter() const override;

		double area() const override;
	private:

	};

}

