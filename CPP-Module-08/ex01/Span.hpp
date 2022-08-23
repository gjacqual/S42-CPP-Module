#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>

#include <vector>

class Span {
public:

    // Constructors
    Span();

    Span(unsigned int n);

    Span(const Span& copy);

    // Destructor
    virtual ~Span();

    // Operators
    Span& operator=(const Span& assign);

    // Getters / Setters

    //Member functions

private:
    std::vector<int> _array;
    unsigned int _size;
};


#endif //EX01_SPAN_HPP
