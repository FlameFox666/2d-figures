#pragma once

namespace Area2D::Constant
{
	// ����������� ���� ��� ���������� ��������� �������.
	class Message
	{
	public:
		static constexpr const char* COORDINATES_PRINT = 
			"'s coordinates:\n";

		// ����� ��������� ������� ��� ����, ��� ���� ��� �����������.
		virtual void dummy() = 0;
	};
}
