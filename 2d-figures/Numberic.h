#pragma once

namespace Area2D::Constant {
	
	class Numberic
	{
	public:
		static constexpr float DIVIDER = 0.5f;
		static constexpr int POWER_OF_TWO = 2;
	private:
		// ����� ��������� ������� ��� ����, ��� ���� ��� �����������.
		virtual void dummy() = 0;
	};

}