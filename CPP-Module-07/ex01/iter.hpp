#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

#include <iostream>
#include <string>
#include <iomanip>

template<typename T>
void iter(T* array, std::size_t length, void (* f)(T const& element)) {
    for (std::size_t i = 0; i < length; i++)
        f(array[i]);
}

template<typename T>
void print(T const& element) {
    std::cout << std::fixed << std::setprecision(1) << element << std::endl;
}

#endif //EX01_ITER_HPP
