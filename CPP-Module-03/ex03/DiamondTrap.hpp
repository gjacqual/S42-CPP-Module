#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
    //Constructors
    DiamondTrap();

    DiamondTrap(const std::string &name);

    DiamondTrap(const DiamondTrap &object);

    //Destructor
    ~DiamondTrap();

    const std::string &getDiamondTrapName() const;

    //Operators
    DiamondTrap &operator=(const DiamondTrap &assign);

    //Methods
    void whoAmI();
    void attack(const std::string &target);
private:
    std::string name_;

};

#endif //EX03_DIAMONDTRAP_HPP
