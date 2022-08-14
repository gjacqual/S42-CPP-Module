#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP


#include "Fixed.hpp"

class Point {
public:
    //Constructors
    Point(void);

    Point(const float x, const float y);

    Point(const Point &object);

    // Destructor
    ~Point(void);

    // Getters / Setters
    const Fixed &getX() const;

    const Fixed &getY() const;

    // Operators
    Point &operator=(const Point &object);

    bool operator==(const Point &rhs) const;

private:
    Fixed const x_;
    Fixed const y_;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

std::ostream &operator<<(std::ostream &ostream, const Point &object);

#endif //EX03_POINT_HPP
