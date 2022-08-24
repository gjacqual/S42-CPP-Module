
#include "Span.hpp"

// Constructors
Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span& copy) : _array(copy._array), _size(copy._size) {

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

//Member functions
void Span::addNumber(int number) {
    if (_array.size() < _size)
        _array.push_back(number);
    else
        throw std::runtime_error("Exception: the storage is full");
}

unsigned int Span::shortestSpan() {
    if (_array.size() < 2)
        throw SpanNoFoundException();
    std::vector<int> temp = _array;
    std::sort(temp.begin(), temp.end());
    unsigned int min = std::numeric_limits<unsigned int>::max();

    std::vector<int>::iterator it;

    for (it = temp.begin() + 1; it != temp.end(); ++it) {
        min = std::min(min, static_cast<unsigned int>(*it - *(it - 1)));
    }
    return min;
}

unsigned int Span::longestSpan() {
    if (_array.size() < 2)
        throw SpanNoFoundException();
    std::vector<int> temp = _array;
    std::sort(temp.begin(), temp.end());

    std::vector<int>::iterator it;
    std::vector<int>::iterator itEnd;
    it = temp.begin();
    itEnd = temp.end() - 1;
    return *itEnd - *it;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if ((_array.size() + std::distance(begin, end)) > _size)
        throw AddRangeFailException();
    _array.insert(_array.end(), begin, end);
}


//Exceptions
const char* Span::SpanNoFoundException::what() const throw() {
    return ("No span can be found!");
}

const char* Span::AddRangeFailException::what() const throw() {
    return ("Exception: Add range fail. The value exceeds the allowed range.");
}
