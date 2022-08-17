
#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <iostream>

class Animal {
public:
    // Constructors
    Animal();
    Animal(const Animal &copy);
    Animal(std::string type);

    // Destructor
    ~Animal();

    // Operators
    Animal & operator=(const Animal &assign);

    // Getters / Setters


    void makeSound();

protected:
    std::string type;
};

#endif //EX00_ANIMAL_HPP
