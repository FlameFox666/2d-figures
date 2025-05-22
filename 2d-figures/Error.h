#pragma once

namespace Area2D::Constant
{
	// Абстрактний клас для збереження повідомлень про помилки.
	class Error
	{
	public:

		static constexpr const char* POLYGON_LESS_THAN_THREE_COORDINATES =
			"Polygon figures must have at least 3 coordinates.\n";
		static constexpr const char* UNAVAILABLE_COORDINATES =
			"No coordinates available.\n";
		static constexpr const char* NGON_LESS_THAN_FIVE_COORDINATES =
			"Ngon must have at least 5 coordinates.\n";
		static constexpr const char* OVAL_INVALID_COORDINATES =
			"Oval figures must have 3 coordinates: center, vertical and horizontal radiuses.\n";

	private:
		// Чисто віртуальна функція для того, щоб клас був абстрактним.
		virtual void dummy() = 0;
	};

}