#pragma once
#include "Circle.h"
#include "Sector.h"

namespace Area2D
{
	class CircleSector : protected Circle, private Sector
	{
	public:

		CircleSector();

		CircleSector(const Circle circle, double radian);

		CircleSector(const Circle circle, int degree);

		CircleSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius,
			double radian
		);

		CircleSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius, 
			int degree
		);

		CircleSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			double radian
		);

		CircleSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			int degree
		);

		// ����� ��������� ������� ��������� ������� ����.
		double perimeter() const override;

		// ����� ��������� ����� ������� ����.
		double area() const override;

		// ������� ������.
		using Sector::getRadian;

		// ������� ������.
		using Sector::getDegree;

		// ������� ����� ������.
		using Circle::getName;

		// ������� ������� ������.
		using Circle::getRadius;

		// ������� ����������.
		using Circle::getCoords;

		// ������� ���������� ����.
		using Circle::printCoords;
	
	private:
		// ������ �������� ������� ���� � ��������.
		// �������: 2r * ���/360 * 2PI * r
		double degreePerimeter() const;

		// ������ �������� ������� ���� � �������.
		// �������: 2r + r * ���
		double radianPerimeter() const;

		// ������ ����� ������� ���� � ��������.
		// �������: ���/360 * PI * r^2
		double degreeArea() const;

		// ������ ����� ������� ���� � �������.
		// �������: 1/2 * r^2 * ���
		double radianArea() const;
	};
}
