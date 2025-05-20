#pragma once

namespace Area2D::Constant
{
	// Абстрактний клас для збереження строкових літералів.
	class Message
	{
	public:
		static constexpr const char* COORDINATES_PRINT = 
			"'s coordinates:\n";

		static constexpr const char* FIGURE_NAME_PLACEHOLDER = 
			"Figure";

	private:
		// Чисто віртуальна функція для того, щоб клас був абстрактним.
		virtual void dummy() = 0;
	};
}
