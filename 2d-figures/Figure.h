#pragma once
#include "Coords.h"

namespace Area2D {
	// ������� ���� ��� ��� �����.
	class Figure {
	protected:
		Coords coords;

	public:
		// 
		Figure();
		//Figure();

		// ����� ���������� ���������� ��� ����������� ��������� ��'���� �������� �����.
		virtual ~Figure();

		// ����� ��������� ������� ��� ���������� �����.
		virtual double area() const = 0;
	};
}

