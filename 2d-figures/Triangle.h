#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// ����, �� ����� ���������.

	// ����������� ����������� ������ - ���������, ������� ������ ���������.
	// ̳����� ������ ��� ���������� ��������� �� ����� ����������.
	class Triangle : public Polygon 
	{
	public:
		// ����������� �� �������������.
		Triangle();

		// ����������� � ��������� ��������� ����� ��� ����� ���������.
		Triangle(
			const std::string& name,
			const Coords& first,
			const Coords& second,
			const Coords& third
		);
		
		// ����������� � ��������� ��������� ����� std::vector.
		Triangle(
			const std::string& name, 
			const std::vector<Coords>& coords
		);

		// ����������� � ��������� ��������� ����� ��������� �����.
		Triangle(
			const std::string& name,
			const Coords* coords
		);

		// ����� ��������� ��������� ����������.
		double perimeter() const override;

		// ����� ��������� ����� ����������.
		double area() const override;
	};
}

