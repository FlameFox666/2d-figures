#pragma once
#include "Numberic.h"
#include "Error.h"


namespace Area2D 
{
	// ����������� ���� ����������� ������ �������� �����.
	// ̳����� ������ ��� ����������� ����� � ������� �� �������.
	class Sector 
	{
	protected:
		enum class Measure 
		{ 
			RADIAN, 
			DEGREE
		};

		static inline bool measure = static_cast<int>(Measure::DEGREE);
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
		static void setMeasure(Measure value) 
		{
			measure = static_cast<int>(value);
		}
	};

}