#include "Triangle.h"

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
            std::vector<Coords>{first, second, third}
        ) {}

    Triangle::Triangle(
        const std::string& name, const std::vector<Coords>& coords
    )
        : Polygon(name, coords) {}

    Triangle::Triangle(
        const std::string& name,
        const Coords* coords
    ) : Triangle(name, std::vector<Coords>(coords, coords + 3)) {}

    double Triangle::perimeter() const 
    {
        if (coords.size() != 3)
        {
			std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
            return 0.0;
        }
        return lines[0] + lines[1] + lines[2];
    }

    double Triangle::area() const 
    {
        if (coords.size() != 3)
        {
            std::cerr << Constant::Error::UNAVAILABLE_COORDINATES;
            return 0.0;
        }

        double semiperimeter = this->perimeter() * Constant::Numberic::DIVIDER;
        
        return sqrt(
               semiperimeter 
            * (semiperimeter - lines[0]) 
            * (semiperimeter - lines[1]) 
            * (semiperimeter - lines[2])
		);
    }
}