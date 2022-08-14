#include "Fixed.hpp"

Fixed::Fixed(void) : fixedNumberValue_(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
    std::cout << "Int constructor called" << std::endl;
    fixedNumberValue_ = number << fractionalBitsValue_;
}

Fixed::Fixed(const float number) {
    std::cout << "Float constructor called" << std::endl;
    fixedNumberValue_ = (int) roundf(number * (1 << fractionalBitsValue_));
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object) {
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed &Fixed::operator=(const Fixed &object) {
    std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream &operator<<(std::ostream &ostream, const Fixed &object) {
    ostream << object.toFloat();
    return ostream;
}
