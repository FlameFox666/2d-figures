#pragma once
#include <cmath>

namespace Area2D::Constant {
	
	class Numberic
	{
	public:
		// Забороняє створення об'єктів цього класу так само, 
		// наче він абстрактний клас.
		Numberic() = delete;

		static constexpr float DIVIDE_BY_TWO = 0.5f;
		static constexpr int POWER_OF_TWO = 2;
		static constexpr double PI = 3.14159265358979323846;
	};

}