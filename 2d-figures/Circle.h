#pragma once
#include "Oval.h"

namespace Area2D 
{
	// ����������� ����������� ������ - ����, ������� ������� �� �������.
	// ̳����� ������ ��� ���������� �������� ��������� �� ����� ����.
	class Circle : public Oval 
	{
	public:
		// ����������� �� �������������.
		Circle();

		// ����������� � ��������� ��������� ����� ��� ����� ���������.
		Circle(
			const std::string& name,
			const Coords& center,
			const Coords& radius
		);

		// ����������� � ��������� ��������� ����� std::vector.
		Circle(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// ����������� � ��������� ��������� ����� ��������� �����.
		Circle(
			const std::string& name,
			const Coords* coords
		);

		// ����� ��������� ������� ��������� ����.
		double perimeter() const override;

		// ����� ��������� ����� ����.
		double area() const override;
	};
}

