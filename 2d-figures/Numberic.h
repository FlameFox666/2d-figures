#pragma once

namespace Area2D::Constant {
	
	class Numberic
	{
	public:
		static constexpr float DIVIDER = 0.5f;
		static constexpr int POWER_OF_TWO = 2;
	private:
		// Чисто віртуальна функція для того, щоб клас був абстрактним.
		virtual void dummy() = 0;
	};

}