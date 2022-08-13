#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP

#include <iostream>

class Fixed {
public:
    // Constructors
    Fixed(void);

    Fixed(const Fixed &object);

    // Destructor
    ~Fixed(void);

    // Getters / Setters
    int getRawBits(void) const;

    void setRawBits(int const raw);

    // Operators
    Fixed &operator=(const Fixed &object);

private:
    int fixedNumberValue_;
    static const int fractionalBitsValue_ = 8;
};

#endif //EX00_FIXED_HPP
