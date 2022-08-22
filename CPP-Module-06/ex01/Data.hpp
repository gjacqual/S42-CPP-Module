#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP

#include <iostream>
#include <string>

struct Data {
    std::string _string;
    int _count;
    char _c;
    float _sum;

    Data(std::string string, int count, char c, float sum)
            : _string(string), _count(count), _c(c), _sum(sum) {}
};

#endif //EX01_DATA_HPP
