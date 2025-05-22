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

		// ����������� � ��������� ��������� ����� ��������� �����.
		Ngon(
			const std::string& name,
			const Coords* coords,
			int size
		);

		// ����� ��������� �������������.
		double perimeter() const override;

		// ����� ����� ������������� �� �������� ������.
		double area() const override;
	};

}
