#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <stdexcept>
#include <algorithm>

class NotFoundException : public std::exception {
    virtual const char* what() const throw() {
        return "Element Not Found!";
    }
};

template<typename T>
typename T::iterator easyfind(T& container, int number) {
    typename T::iterator iter = std::find(container.begin(), container.end(), number);
    if (iter == container.end())
        throw NotFoundException();
    return iter;
}

#endif //EX00_EASYFIND_HPP
