#pragma once

namespace Area2D 
{
	// ���� ��� ���������� ���������� ��� �������.
	class ErrorMessage 
	{
	public:

		static constexpr const char* POLYGON_LESS_THAN_THREE_COORDINATES = 
			"Polygon must have at least 3 coordinates.\n";
		static constexpr const char* UNAVAILABLE_COORDINATES = 
			"No coordinates available.\n";

		// ����� ��������� ������� ��� ����, ��� ���� ��� �����������.
		virtual void dummy() = 0;
	};

}