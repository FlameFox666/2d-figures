#pragma once
#include <ostream>
#include <istream>

namespace Area2D 
{
	// ����, �� ����������� ����� � 2D �������.
	class Coords 
	{
	private:
		double x;
		double y;

	public:
		// ����������� �� �������������, �� �������� ���������� �� ����.
		Coords();

		// �����������, �� ������ ��� ��������� ��� ����������� ���������.
		Coords(double x, double y);

		~Coords() {}

		// ������� � ���������� �����.
		double getX() const;

		// ������� Y ���������� �����.
		double getY() const;

		// ���������� ���� �������� ��� � ����������.
		void setX(double x);

		// ���������� ���� �������� ��� Y ����������.
		void setY(double y);

		// �������� ���������� ����� � ������� � ������ (x, y).
		friend std::ostream& operator<<(std::ostream& os, const Coords& point);

		// ����� ���������� � �������� ������ 
		// � ������ ���� ������� ���� double.
		friend std::istream& operator>>(std::istream& is, Coords& point);

		friend class Polygon;
	};
}
