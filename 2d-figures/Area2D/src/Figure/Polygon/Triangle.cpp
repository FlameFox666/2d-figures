#include "Figure/Polygon/Triangle.h"

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
            std::cerr << Error::UNAVAILABLE_COORDINATES;
            return 0.0;
        }

        double result = lines[0] + lines[1] + lines[2];

        if (result <= 0)
        {
            std::cerr << Error::DEGENERADE_POLYGON;
            return 0.0;
        }

        return result;
    }

    double Triangle::area() const 
    {
        if (coords.size() != Numberic::TRIANGLE_VERTEX_COUNT)
        {
            std::cerr << Error::UNAVAILABLE_COORDINATES;
            return 0.0;
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
            std::cerr << Error::DEGENERADE_POLYGON;
            return 0.0;
        }

        return result;
    }

    void Triangle::setCoords(const std::vector<Coords>& ñoords)
    {
        if (coords.size() != Numberic::TRIANGLE_VERTEX_COUNT)
        {
            std::cerr << Error::TRIANGLE_THREE_COORDINATES;
            return;
        }
        Figure::setCoords(coords);
    }

    void Triangle::setCoords(const Coords* coords, size_t size)
    {
        if (size != Numberic::TRIANGLE_VERTEX_COUNT)
        {
            std::cerr << Error::TRIANGLE_THREE_COORDINATES;
            return;
        }
		Figure::setCoords(coords, size);
    }
}