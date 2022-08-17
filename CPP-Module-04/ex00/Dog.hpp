
#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP


#include "Animal.hpp"

class Dog: public Animal {
public:
    // Constructors
    Dog();
    Dog(const Dog &copy);

    // Destructor
    ~Dog();

    // Operators
    Dog & operator=(const Dog &assign);

    // Getters / Setters

    void makeSound() const;

};

#endif //EX00_DOG_HPP
