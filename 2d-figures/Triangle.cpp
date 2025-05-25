#include "Triangle.h"

using Area2D::Constant::Error;
using Area2D::Constant::Numberic;

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
    ) 
        : Triangle(name, std::vector<Coords>(coords, coords + 3)) {}

    double Triangle::perimeter() const 
    {
        if (coords.size() != Numberic::TRIANGLE_VERTEX_COUNT)
        {
            throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
        }

        double result = lines[0] + lines[1] + lines[2];

        if (result <= 0)
        {
            throw std::logic_error(Error::DEGENERADE_POLYGON);
        }

        return result;
    }

    double Triangle::area() const 
    {
        if (coords.size() != Numberic::TRIANGLE_VERTEX_COUNT)
        {
            throw std::invalid_argument(Error::UNAVAILABLE_COORDINATES);
        }

        double semiperimeter = this->perimeter() * Numberic::DIVIDE_BY_TWO;
        
        double result = sqrt(
               semiperimeter 
            * (semiperimeter - lines[0]) 
            * (semiperimeter - lines[1]) 
            * (semiperimeter - lines[2])
		);

        if (result <= 0)
        {
            throw std::logic_error(Error::DEGENERADE_POLYGON);
        }

        return result;
    }
}