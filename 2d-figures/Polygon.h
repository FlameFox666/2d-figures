#pragma once
#include "Figure.h"
#include "Error.h"
#include "Message.h"
#include <iostream>
#include <cmath>
#include <vector>

namespace Area2D 
{
	// ����������� ����, �� ����������� ������ � ���������
	// �� ���������. ̳����� ������ ��� ��������� ���
	// ������ ������ �� ������� ���� �����.
	class Polygon : public Figure 
	{
	protected:
		std::vector<double> lines;
	public:
		// ����������� �� ������������.
		Polygon();
		
		// ����������� � ������������ ������� ���.
		Polygon(
			const std::string& name, 
			const std::vector<Coords>& coordsArray
		);
		
		virtual ~Polygon() = default;

		// ������� ������ ����� ������.
		const std::vector<double>& getLine() const;

		// �������� ���������� ������.
		void printCoords() const override;

	protected:
		// ������ ������� �� ����� ������������.
		double MeasureDistance(
			const Coords& first, 
			const Coords& second
		) const;
	};

}