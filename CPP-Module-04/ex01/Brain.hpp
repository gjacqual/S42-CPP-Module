
#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include <iostream>

class Brain {
public:
    Brain();

    Brain(const Brain &copy);

    ~Brain();

    Brain &operator=(const Brain &assign);

private:
    std::string ideas_[100];
};


#endif //EX01_BRAIN_HPP
