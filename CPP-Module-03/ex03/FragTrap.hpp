#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    //Constructors
    FragTrap();

    FragTrap(const std::string &name);

    FragTrap(const FragTrap &object);

    //Destructor
    ~FragTrap();

    //Operators
    FragTrap &operator=(const FragTrap &assign);

    //Methods
    void highFivesGuys(void);
};

#endif //EX03_FRAGTRAP_HPP
