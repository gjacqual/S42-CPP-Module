#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP

#define COLOR_CLEAR     "\033[0m"
#define COLOR_YELLOW    "\033[0;33m"

#include <iostream>
#include <string>

// for type uintptr_t
#include <stdint.h>

struct Data {
    std::string _string;
    int _count;
    char _c;
    float _sum;

    Data(std::string string, int count, char c, float sum)
            : _string(string), _count(count), _c(c), _sum(sum) {}
};

#endif //EX01_DATA_HPP
