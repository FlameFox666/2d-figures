#pragma once
#include "Coords.h"

namespace Area2D {
	// ������� ����������� ���� ��� ��� �����.
	class Figure {
	protected:
		Coords* coords;
		int size; // ʳ������ ��������� (�����) ������.

	public:
		// ����������� �� �������������.
		Figure();
		
		// ����������� � �������� ���������.
		Figure(const Coords* coordsArray, int count);

		// ����������� ���������.
		Figure(const Figure& other); 

		// �������� ���������.
		Figure& operator=(const Figure& other); 

		// ����� ���������� ���������� ��� ����������� ��������� ��'���� �������� �����.
		virtual ~Figure();

		// ����� ��������� ������� ��� ���������� ���������.
		virtual double perimeter() const = 0; 

		// ����� ��������� ������� ��� ���������� �����.
		virtual double area() const = 0;
	};
}

