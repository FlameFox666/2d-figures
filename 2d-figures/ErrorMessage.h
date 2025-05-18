#pragma once

namespace Area2D 
{
	// Клас для збереження повідомлень про помилки.
	class ErrorMessage 
	{
	public:

		static constexpr const char* POLYGON_LESS_THAN_THREE_COORDINATES = 
			"Polygon must have at least 3 coordinates.\n";
		static constexpr const char* UNAVAILABLE_COORDINATES = 
			"No coordinates available.\n";

		// Чисто віртуальна функція для того, щоб клас був абстрактним.
		virtual void dummy() = 0;
	};

}