#pragma once
#include "Coords.h"
#include <string>
#include "Message.h"
#include "Numberic.h"
#include <vector>

namespace Area2D 
{
	// ����������� ���� ��� ��� �����.
	class Figure 
	{
	protected:
		std::string name;
		std::vector<Coords> coords;

	public:
		// ����������� �� �������������.
		Figure();

		// ����������� � �������� ���������.
		Figure(
			const std::string& name, 
			const std::vector<Coords>& coords
		);

		 // ³��������� ����������.
		virtual ~Figure() = default;

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

