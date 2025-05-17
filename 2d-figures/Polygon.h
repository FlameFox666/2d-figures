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
		Polygon(const Coords* coordsArray, int count);
		
		virtual ~Polygon();

	private:
		double MeasureDistance(const Coords& first, const Coords& second) const;
	};

}

