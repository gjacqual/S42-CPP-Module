
#ifndef EX01_CAT_HPP
#define EX01_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:
    // Constructors
    Cat();

    Cat(const Cat &copy);

    // Destructor
    ~Cat();

    // Operators
    Cat &operator=(const Cat &assign);

    // Getters / Setters
    void makeSound() const;

private:
    Brain *brain;
};

#endif //EX01_CAT_HPP
