
#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP


#include "Animal.hpp"

class Dog: public Animal {
public:
    // Constructors
    Dog();
    Dog(const Dog &copy);
    Dog(std::string type);

    // Destructor
    ~Dog();

    // Operators
    Dog & operator=(const Dog &assign);

    // Getters / Setters

    void makeSound();


};


#endif //EX00_DOG_HPP
