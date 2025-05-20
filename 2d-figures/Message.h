#pragma once

namespace Area2D::Constant
{
	// ����������� ���� ��� ���������� ��������� �������.
	class Message
	{
	public:
		static constexpr const char* COORDINATES_PRINT = 
			"'s coordinates:\n";

		static constexpr const char* FIGURE_NAME_PLACEHOLDER = 
			"Figure";

	private:
		// ����� ��������� ������� ��� ����, ��� ���� ��� �����������.
		virtual void dummy() = 0;
	};
}
