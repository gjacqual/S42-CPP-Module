#include "Fixed.hpp"

Fixed::Fixed(void) : fixedNumberValue_(0) {}

Fixed::Fixed(const int number) {
    fixedNumberValue_ = number << fractionalBitsValue_;
}

Fixed::Fixed(const float number) {
    fixedNumberValue_ = (int) roundf(number * (1 << fractionalBitsValue_));
}

Fixed::~Fixed(void) {}

Fixed::Fixed(const Fixed &object) {
    *this = object;
}

Fixed &Fixed::operator=(const Fixed &object) {
    if (this != &object)
        this->fixedNumberValue_ = object.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    return fixedNumberValue_;
}

void Fixed::setRawBits(const int raw) {
    fixedNumberValue_ = raw;
}

float Fixed::toFloat(void) const {
    return (float) fixedNumberValue_ / (1 << fractionalBitsValue_);
}

int Fixed::toInt(void) const {
    return fixedNumberValue_ >> fractionalBitsValue_;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return fixedNumberValue_ == rhs.fixedNumberValue_;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return !(rhs == *this);
}

bool Fixed::operator<(const Fixed &rhs) const {
    return fixedNumberValue_ < rhs.fixedNumberValue_;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return !(*this < rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed temp;
    temp.setRawBits(this->getRawBits() + rhs.getRawBits());
    return temp;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    Fixed temp;
    temp.setRawBits(this->getRawBits() - rhs.getRawBits());
    return temp;
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    if (rhs.toInt() == 0)
        throw std::runtime_error("You can't divide by zero");
    Fixed temp;
    temp.setRawBits((this->getRawBits() << fractionalBitsValue_) / rhs.getRawBits());
    return temp;
}

Fixed &Fixed::operator++() {
    fixedNumberValue_ += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed copy;
    copy = *this;
    fixedNumberValue_ += 1;
    return copy;
}

Fixed &Fixed::operator--() {
    fixedNumberValue_ -= 1;
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed copy = *this;
    fixedNumberValue_ -= 1;
    return copy;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return a > b ? a : b;
}

std::ostream &operator<<(std::ostream &ostream, const Fixed &object) {
    ostream << object.toFloat();
    return ostream;
}
