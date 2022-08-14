#include "Point.hpp"

Point::Point(void) : x_(0), y_(0) {}

Point::Point(const float x, const float y) : x_(x), y_(y) {}

Point::Point(const Point &object) : x_(object.x_), y_(object.y_) {}

Point::~Point(void) {}

Point &Point::operator=(const Point &object) {
    if (this != &object) {
        Fixed *x_ptr = const_cast<Fixed *>(&x_);
        Fixed *y_ptr = const_cast<Fixed *>(&y_);

        *x_ptr = object.x_;
        *y_ptr = object.y_;
    }

    return *this;
}

const Fixed &Point::getX() const {
    return x_;
}

const Fixed &Point::getY() const {
    return y_;
}

bool Point::operator==(const Point &rhs) const {
    if (x_ == rhs.x_ && y_ == rhs.y_)
        return true;
    return false;
}

std::ostream &operator<<(std::ostream &ostream, const Point &object) {
    ostream << "(" << object.getX() << ", " << object.getY() << "); ";
    return ostream;
}
