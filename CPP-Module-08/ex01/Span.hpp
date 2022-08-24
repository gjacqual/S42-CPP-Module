#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <limits>

class Span {
public:

    // Constructors
    Span();

    explicit Span(unsigned int n);

    Span(const Span& copy);

    // Destructor
    virtual ~Span();

    // Operators
    Span& operator=(const Span& assign);

    //Member functions

    void addNumber(int number);

    unsigned int shortestSpan();

    unsigned int longestSpan();

    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    class AddRangeFailException : public std::exception {
        const char* what() const throw();
    };

    class SpanNoFoundException : public std::exception {
        const char* what() const throw();
    };

private:
    std::vector<int> _array;
    unsigned int _size;
};


#endif //EX01_SPAN_HPP
