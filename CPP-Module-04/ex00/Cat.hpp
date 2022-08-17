
#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP


#include "Animal.hpp"

class Cat: public Animal {

public:
    // Constructors
    Cat();
    Cat(const Cat &copy);
    Cat(std::string type);

    // Destructor
    ~Cat();

    // Operators
    Cat & operator=(const Cat &assign);

    // Getters / Setters
    void makeSound();
};


#endif //EX00_CAT_HPP
