#pragma once
#include "Coords.h"
#include <string>

namespace Area2D 
{
	// ����������� ���� ��� ��� �����.
	class Figure 
	{
	private:
		static constexpr const char* NAME_PLACEHOLDER = "Figure";
	protected:
		static constexpr float DIVIDER = 0.5f;
		static constexpr int POWER_OF_TWO = 2;
		std::string name;
		Coords* coords;
		int size;

	public:
		// ����������� �� �������������.
		Figure();
		
		// ����������� � �������� ���������.
		Figure(
			const std::string& name, 
			const Coords* coords_, 
			int size
		);

		// ����������� ���������.
		Figure(const Figure& other); 

		// �������� ���������.
		Figure& operator=(const Figure& other);

		// ����� ���������� ���������� ��� 
		// ����������� ��������� ��'���� �������� �����.
		virtual ~Figure();

		// ������� ����� ������.
		std::string getName() const;
		
		// ���������� ����� ������.
		void setName(const std::string& name);

		// ����� ��������� ������� ��� ���������� ���������.
		virtual double perimeter() const = 0; 

		// ����� ��������� ������� ��� ���������� �����.
		virtual double area() const = 0;
	
		// ����� ��������� ������� ��� ����������� ��������� ������.
		virtual void printCoords() const = 0;
	};
}

