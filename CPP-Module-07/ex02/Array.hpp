#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <iostream>
#include <string>

template<class T>
class Array {
public:

    // Constructors
    Array();

    explicit Array(unsigned int size);

    Array(const Array<T>& copy);

    // Destructor
    ~Array();

    // Operators
    Array& operator=(const Array<T>& assign);

    T& operator[](unsigned int i);

    T const& operator[](int i) const;

    //Member functions

    unsigned int size() const;

    class OutOfBoundsException : public std::exception {
        const char *what() const throw();
    };

private:
    T* _array;
    unsigned int _size;
};

#include "Array.tpp"


#endif //EX02_ARRAY_HPP
