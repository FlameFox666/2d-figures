#include "Triangle.h"

namespace Area2D {

    Triangle::Triangle() : Polygon() {}

    Triangle::Triangle(
        const Coords& first, 
        const Coords& second, 
        const Coords& third
    ) : Polygon(new Coords[3]{first, second, third}, 3) {}

    Triangle::Triangle(const Coords* coords) : Polygon(coords, 3) {}

    double Triangle::perimeter() const {
        return lines[0] + lines[1] + lines[2];
    }

    double Triangle::area() const {
        return 0.0;
    }
}