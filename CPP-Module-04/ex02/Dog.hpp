#ifndef EX02_DOG_HPP
#define EX02_DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
    // Constructors
    Dog();

    Dog(const Dog &copy);

    // Destructor
    virtual ~Dog();

    // Operators
    Dog &operator=(const Dog &assign);

    // Getters / Setters

    void makeSound() const;

    //Member functions
    const std::string &getIdea(int i) const;

    void setIdea(int i, std::string const &idea);

private:
    Brain *brain_;

};

#endif //EX02_DOG_HPP
