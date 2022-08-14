#include "Fixed.hpp"

Fixed::Fixed(void) : fixedNumberValue_(0) {
    std::cout << "Default constructor called" << std::endl;
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
    std::cout << "getRawBits member function called" << std::endl;
    return fixedNumberValue_;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixedNumberValue_ = raw;
}
