#pragma once

namespace Area2D::Constant
{
	// Абстрактний клас для збереження строкових літералів.
	class Message
	{
	public:
		static constexpr const char* COORDINATES_PRINT = 
			"'s coordinates:\n";

		// Чисто віртуальна функція для того, щоб клас був абстрактним.
		virtual void dummy() = 0;
	};
}
