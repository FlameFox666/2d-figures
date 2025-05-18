#pragma once
#include "Figure.h"

namespace Area2D {
	// ����������� ����, �� ����� ������ � ��������� �� ���������.
	class Polygon : public Figure {
	protected:
		double* lines;
	public:
		// ����������� �� ������������.
		Polygon();
		
		// ����������� � ������������ ������� ���.
		Polygon(const std::string& name, const Coords* coordsArray, int size);
		
		// ����������� ���������.
		Polygon(const Polygon& other);

		Polygon& operator=(const Polygon& other);

		virtual ~Polygon();

		// ����� ��� �������� ��������� ������.
		void printCoords() const override;

	private:
		// ��������� ����� ��� ����� ������ �� ����� ������������.
		double MeasureDistance(const Coords& first, const Coords& second) const;
	};

}