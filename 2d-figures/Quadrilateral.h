#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// ����, �� ����� �������������.
	class Quadrilateral : public Polygon 
	{
	public:
		// ����������� �� �������������.
		Quadrilateral();

		// TODO: ���� ��������� ������� �����.

		// ����������� � �����������.

		double perimeter() const override;

		double area() const override;
	};
}
