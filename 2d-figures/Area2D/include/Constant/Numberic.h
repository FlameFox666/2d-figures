#pragma once

namespace Area2D::Constant {
	
	class Numberic
	{
	public:
		// Забороняє створення об'єктів цього класу так само, 
		// наче він абстрактний клас.
		Numberic() = delete;

		static constexpr int FULL_CIRCLE = 360;
		static constexpr int POWER_OF_TWO = 2;
		static constexpr int RADIUS_COUNT = 2;

		static constexpr float DIVIDE_BY_TWO = 0.5f;
		static constexpr float RAMANUJAN_APPROX_COEFF = 3.0f;
		
		static constexpr double PI     = 3.14159265358979323846;
		static constexpr double TWO_PI = 6.28318530717958647692;
		
		static constexpr size_t MINIMAL_POLYGON_VERTICES = 3;
		static constexpr size_t MINIMAL_OVAL_COORDINATES = 3;
		static constexpr size_t MINIMAL_NGON_VERTICES = 5;
		static constexpr size_t TRIANGLE_VERTEX_COUNT = 3;
		static constexpr size_t QUADRILATERAL_VERTEX_COUNT = 4;
	};

}