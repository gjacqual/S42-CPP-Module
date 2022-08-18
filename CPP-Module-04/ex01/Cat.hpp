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
    virtual ~Cat();

    // Operators
    Cat &operator=(const Cat &assign);

    // Getters / Setters
    void makeSound() const;

    //Member functions
    const std::string &getIdea(int i) const;

    void setIdea(int i, std::string const &idea);



private:
    Brain *brain_;
};

#endif //EX01_CAT_HPP
