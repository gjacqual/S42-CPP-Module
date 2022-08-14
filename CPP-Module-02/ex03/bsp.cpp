#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    //if the point is a vertex
    if (point == a || point == b || point == c)
        return false;
    Fixed composition1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) -
                         (b.getX() - a.getX()) * (a.getY() - point.getY());
    Fixed composition2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) -
                         (c.getX() - b.getX()) * (b.getY() - point.getY());
    Fixed composition3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) -
                         (a.getX() - c.getX()) * (c.getY() - point.getY());
    if (composition1 == 0 || composition2 == 0 || composition3 == 0)
        return false;
    if ((composition1 > 0 && composition2 > 0 && composition3 > 0) ||
        (composition1 < 0 && composition2 < 0 && composition3 < 0))
        return true;
    return false;
}

