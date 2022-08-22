#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T &max(T &a, T &b) {
    return a > b ? a : b;
}

template<typename T>
const T &max(const T &a, const T &b) {
    return a > b ? a : b;
}

template<typename T>
T &min(T &a, T &b) {
    return a < b ? a : b;
}

template<typename T>
const T &min(const T &a, const T &b) {
    return a < b ? a : b;
}


#endif //EX00_WHATEVER_HPP
