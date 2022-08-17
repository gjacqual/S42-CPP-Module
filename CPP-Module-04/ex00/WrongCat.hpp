#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    // Constructors
    WrongCat();

    WrongCat(const WrongCat &copy);

    // Destructor
    ~WrongCat();

    // Operators
    WrongCat &operator=(const WrongCat &assign);

    // Getters / Setters
    void makeSound() const;
};


#endif //EX00_WRONGCAT_HPP
