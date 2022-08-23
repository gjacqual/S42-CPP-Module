#include "Span.hpp"

// Constructors
Span::Span() : _size(0){}

Span::Span(unsigned int n) :  _size(n){}

Span::Span(const Span& copy): _array(copy._array), _size(copy._size) {

}

// Destructor
Span::~Span() {}

// Operators
Span& Span::operator=(const Span& assign) {
    if (this != &assign) {
        _array = assign._array;
        _size = assign._size;
    }
    return *this;
}

// Getters / Setters

//Member functions
