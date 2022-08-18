#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>

class AMateria {
public:

    // Constructors
    AMateria(std::string const & type);

    // Destructor

    // Operators

    // Getters / Setters
    std::string const & getType() const; //Returns the materia type

    //Member functions
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

protected:
    //data
};


#endif //EX03_AMATERIA_HPP
