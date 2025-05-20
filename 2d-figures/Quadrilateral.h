#pragma once
#include "Polygon.h"

namespace Area2D 
{
	// ����������� ����������� ������ � ������������, �������������
	// �������� ������������. ̳����� ������ ��� ����������  
	// ��������� �� ����� ������� �������������.
	class Quadrilateral : public Polygon 
	{
	protected:
		double diagonal[2] = { 0.0, 0.0 }; // ĳ������ �������������.
	public:
		// ����������� �� �������������.
		Quadrilateral();

		// ����������� � ��������� ����� �� ��������� ����������.
		Quadrilateral(
			const std::string& name,
			const Coords& first,
			const Coords& second,
			const Coords& third,
			const Coords& fourth
		);

		// ����������� � ��������� ����� �� ������� ���������.
		Quadrilateral(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		// ����� ��������� �������������.

		double perimeter() const override;

		// ����� ����� ������������� �� ����������.
		double area() const override;

	private:
		// ��������� �����, �� �������� ������� ���������.
		// ����������� Polygon::MeasureDistance() ��� ���������� ����������
		// ���� � �������������.
		void MeasureDiagonals();
	};
}
