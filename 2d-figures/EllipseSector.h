#pragma once
#include "Ellipse.h"
#include "Sector.h"

namespace Area2D
{
	class EllipseSector : protected Ellipse, private Sector
	{
	public:

		EllipseSector();

		EllipseSector(const Ellipse ellipse, double radian);

		EllipseSector(const Ellipse ellipse, int degree);

		EllipseSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2,
			double radian
		);

		EllipseSector(
			const std::string& name,
			const Coords& center,
			const Coords& radius1,
			const Coords& radius2,
			int degree
		);

		EllipseSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			double radian
		);

		EllipseSector(
			const std::string& name,
			const std::vector<Coords>& coords,
			int degree
		);

		// ����� ��������� ������� ��������� ������� �����.
		double perimeter() const override;

		// ����� ��������� ����� ������� �����.
		double area() const override;

		// ������� ������.
		using Sector::getRadian;

		// ������� ������.
		using Sector::getDegree;

		// ������� ����� ������.
		using Ellipse::getName;

		// ������� ������� ������.
		using Ellipse::getRadius;

		// ������� ����������.
		using Ellipse::getCoords;

	private:
		// ������ �������� ������� ����� � ��������.
		// �������: 2 * sqrt((��������.r^2  + ����.r^2 ) / 2) + 
		//			��� / 360 * ��������
		double degreePerimeter() const;

		// ������ �������� ������� ����� � �������.
		// �������: 2 * sqrt((��������.r^2  + ����.r^2) / 2) + 
		//			��� / 2PI * ��������
		double radianPerimeter() const;

		// ������ ����� ������� ����� � ��������.
		// �������: (2PI * r1 * r2 * ���) / 360
		double degreeArea() const;

		// ������ ����� ������� ����� � �������.
		// �������: 0.5 * r1 * r2 * ���
		double radianArea() const;
	};
}
