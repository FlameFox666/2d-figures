#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// ����������� ����������� ������ � ������������, �������������
	// �� �'��� ��������� �� �����. ̳����� ������ ��� ����������  
	// ��������� �� ����� ������� �������������.
	class Ngon : public Polygon
	{
	public:
		Ngon();

		// �����������, �� ������ ������ ���������.
		Ngon(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// ����� ��������� �������������.
		double perimeter() const override;

		// ����� ����� ������������� �� �������� ������.
		double area() const override;
	};

}
