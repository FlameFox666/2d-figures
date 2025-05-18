#pragma once
#include "Coords.h"
#include "ErrorMessage.h"
#include <string>

namespace Area2D 
{
	// ������� ����������� ���� ��� ��� �����.
	class Figure 
	{
	private:
		static constexpr const char* NAME_PLACEHOLDER = "Figure";
	protected:
		std::string name;
		Coords* coords;
		int size;

	public:
		// ����������� �� �������������.
		Figure();
		
		// ����������� � �������� ���������.
		Figure(
			const std::string& name, 
			const Coords* coordsArray, 
			int size
		);

		// ����������� ���������.
		Figure(const Figure& other); 

		// �������� ���������.
		Figure& operator=(const Figure& other);

		// ����� ���������� ���������� ��� 
		// ����������� ��������� ��'���� �������� �����.
		virtual ~Figure();

		// ������ ��� ��������� ����� ������.
		std::string getName() const;
		
		// ������ ��� ������������ ����� ������.
		void setName(const std::string& name);

		// ����� ��������� ������� ��� ���������� ���������.
		virtual double perimeter() const = 0; 

		// ����� ��������� ������� ��� ���������� �����.
		virtual double area() const = 0;
	
		// ����� ��������� ������� ��� ����������� ��������� ������.
		virtual void printCoords() const = 0;
	};
}

