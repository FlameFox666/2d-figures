#pragma once
#include "Figure.h"
#include <array>

namespace Area2D 
{
	// ����������� ����, �� ����������� ������ ������.
	// ̳����� ������ ��� ��������� ��� ������ ������.
	class Oval : public Figure 
	{
	protected:
		std::array<double, 2> radius;

		enum class CoordsIndex 
		{
			CENTER, HORIZONTAL_RADIUS, VERTICAL_RADIUS
		};
	public:
		Oval();

		Oval(
			const std::string& name,
			const std::vector<Coords>& coords
		);

		virtual ~Oval() = default;

		// ������ ���������� ������ �� �����.
		const std::array<double, 2>& getRadius() const;

		// �������� ���������� ������ �� ����������������� ������.
		void printCoords() const override;
	};
}


