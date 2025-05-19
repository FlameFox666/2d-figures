#include "Triangle.h"
#include <iostream>
#include <cmath>

namespace Area2D 
{

    Triangle::Triangle() : Polygon() {}

    Triangle::Triangle(
		const std::string& name,
        const Coords& first, 
        const Coords& second, 
        const Coords& third
    ) 
        : Polygon(
			name,
            new Coords[3]{first, second, third}, 3
        ) {}

    Triangle::Triangle(
        const std::string& name, const Coords* coords
    )
        : Polygon(name, coords, 3) {}

    double Triangle::perimeter() const 
    {
        if (coords == nullptr)
        {
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
            return 0.0;
        }
        return lines[0] + lines[1] + lines[2];
    }

    double Triangle::area() const 
    {
        if (coords == nullptr)
        {
            std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
            return 0.0;
        }

        double semiperimeter = this->perimeter() * DIVIDER;
        
        return sqrt(
               semiperimeter 
            * (semiperimeter - lines[0]) 
            * (semiperimeter - lines[1]) 
            * (semiperimeter - lines[2])
		);
    }
}