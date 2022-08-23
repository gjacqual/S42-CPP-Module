#include "Array.hpp"

// Constructors
template<typename T>
Array<T>::Array() : _array(0), _size(0) {
    std::cout << "Default Constructor called of Array" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int size) : _array(new T[size]), _size(size) {
    std::cout << "Constructor called of Array with size" << size << std::endl;
}

template<typename T>
Array<T>::Array(const Array& copy)
        : _array(new T[copy._size]), _size(copy._size) {
    for (unsigned int i = 0; i < copy._size; i++)
        _array[i] = copy.array[i];
    std::cout << "Copy Constructor called of Array" << std::endl;

}

// Destructor
template<typename T>
Array<T>::~Array() {
    if (_array)
        delete[] _array;
    std::cout << "Destructor called of Array" << std::endl;
}

// Operators
template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& assign) {
    std::cout << "Assigment operator called of Array" << std::endl;
    if (this != assign) {
        if (_size) {
            delete [] _array;
            _array = 0;
            _size = 0;
        }
        _size = assign._size;
        if (_size)
            _array = new T[assign._size];
        for (unsigned int i = 0; i < assign._size; i++)
            _array[i] = assign.array[i];
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int i) {
    if (!_array || i < 0 || i >= _size)
        throw OutOfBoundsException();
    return _array[i];
}

template<typename T>
T const& Array<T>::operator[](int i) const {
    if (!_array || i < 0 || i >= _size)
        throw OutOfBoundsException();
    return _array[i];
}

//Member functions
template<typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template<class T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return ("Exception: Index is out of bounds");
}