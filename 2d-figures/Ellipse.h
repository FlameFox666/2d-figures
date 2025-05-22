#pragma once
#include "Oval.h"

namespace Area2D 
{
	// ����������� ����������� ������ - ����, ������� ������� �� 
	// �������� ���� ������ ������� ������ �� ���� ������ �������.  
	// ̳����� ������ ��� ���������� �������� ��������� �� ����� �����.
	class Ellipse : public Oval 
	{
	public:
		// ����������� �� �������������.
		Ellipse();

		// ����������� � ��������� ��������� ����� ��� ����� ���������.
		Ellipse(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2
		);

		// ����������� � ��������� ��������� ����� std::vector.
		Ellipse(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// ����������� � ��������� ��������� ����� ��������� �����.
		Ellipse(
			const std::string& name,
			const Coords* coords
		);

		// ��������� ������� ��������� �����
		// ����� ������� ������.
		double perimeter() const override;

		// ��������� ����� �����.
		double area() const override;
	};
}

