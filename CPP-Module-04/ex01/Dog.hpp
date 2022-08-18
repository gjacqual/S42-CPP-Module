
#ifndef EX01_DOG_HPP
#define EX01_DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
    // Constructors
    Dog();

    Dog(const Dog &copy);

    // Destructor
    ~Dog();

    // Operators
    Dog &operator=(const Dog &assign);

    // Getters / Setters

    void makeSound() const;

private:
    Brain *brain;

};

#endif //EX01_DOG_HPP
