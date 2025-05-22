#pragma once
#include "Coords.h"
#include "Error.h"
#include "Message.h"
#include "Numberic.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

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
		
		// ������� ������ ��������� ������.
		const std::vector<Coords>& getCoords() const;

		// ���������� ����� ������.
		void setName(const std::string& name);

		// ����� ��������� ������� ��� ���������� ���������.
		virtual double perimeter() const = 0; 

		// ����� ��������� ������� ��� ���������� �����.
		virtual double area() const = 0;
	
		// ����� ��������� ������� ��� ����������� ��������� ������.
		virtual void printCoords() const = 0;
	
	protected:
		// ���������� ��� � ��� �����. ������� ��� 
		// ���������� ���� �� ���� ������������.
		template<typename T>
		int toInt(T value) const {
			return static_cast<int>(value);
		}
	};
}