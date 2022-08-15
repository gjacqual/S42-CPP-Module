#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

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

    //Methods
    float toFloat(void) const;

    int toInt(void) const;

private:
    int fixedNumberValue_;
    static const int fractionalBitsValue_ = 8;
};

std::ostream& operator<<(std::ostream &ostream, const Fixed &object);

#endif //EX01_FIXED_HPP
