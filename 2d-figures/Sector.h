#pragma once
#include "Numberic.h"
#include "Error.h"


namespace Area2D 
{
	// ����������� ���� ����������� ������ �������� �����.
	// ̳����� ������ ��� ����������� ����� � ������� �� �������.
	class Sector 
	{
	public:
		enum class Measure
		{
			RADIAN,
			DEGREE
		};
	protected:
		static inline Measure measure = Measure::DEGREE;
		double radian;
		int degree;

	public:
		// ������� �����������.
		Sector();

		// �����������, �� ������ ������ �� �������� ���.
		Sector(double radian);

		// �����������, �� ������ ������ �� �������� ���.
		Sector(int degree);

		// ������� ������.
		double getRadian() const;

		// ������� ������.
		int getDegree() const;

		// ������� ������ � ��������.
		double degreeToRadian() const;

		// ������� ������ � �������.
		int radianToDegree() const;
		
		// ����� �������� ���. 
		static void setMeasure(Measure value);

		static Measure getMeasure();
	};

}