#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    //Constructors
    ScavTrap();

    ScavTrap(const std::string &name);

    ScavTrap(const ScavTrap &object);

    //Destructor
    ~ScavTrap();

    //Operators
    ScavTrap &operator=(const ScavTrap &assign);

    //Methods
    void attack(const std::string &target);

    void guardGate();

};

#endif //EX03_SCAVTRAP_HPP
