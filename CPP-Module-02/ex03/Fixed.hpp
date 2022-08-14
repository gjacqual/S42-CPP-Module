#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    // Constructors
    Fixed(void);

    Fixed(const int number);

    Fixed(const float number);

    Fixed(const Fixed &object);

    // Destructor
    ~Fixed(void);

    // Getters / Setters
    int getRawBits(void) const;

    void setRawBits(int const raw);

    // Operators
    Fixed &operator=(const Fixed &object);

    // Comparison operators: >, <, >=, <=, == and !=. "rhs" is a right-hand-side
    bool operator==(const Fixed &rhs) const;

    bool operator!=(const Fixed &rhs) const;

    bool operator<(const Fixed &rhs) const;

    bool operator>(const Fixed &rhs) const;

    bool operator<=(const Fixed &rhs) const;

    bool operator>=(const Fixed &rhs) const;

    //arithmetic operators: +, -, *, and /.
    Fixed operator+(const Fixed &rhs) const;

    Fixed operator-(const Fixed &rhs) const;

    Fixed operator*(const Fixed &rhs) const;

    Fixed operator/(const Fixed &rhs) const;

    //increment/decrement operators
    Fixed &operator++();

    Fixed operator++(int);

    Fixed &operator--();

    Fixed operator--(int);

    //Methods
    float toFloat(void) const;

    int toInt(void) const;

    static Fixed &min(Fixed &a, Fixed &b);

    static const Fixed &min(const Fixed &a, const Fixed &b);

    static Fixed &max(Fixed &a, Fixed &b);

    static const Fixed &max(const Fixed &a, const Fixed &b);

private:
    int fixedNumberValue_;
    static const int fractionalBitsValue_ = 8;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &object);

#endif //EX00_FIXED_HPP
