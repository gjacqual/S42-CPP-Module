#include "ScavTrap.hpp"

int main(void) {

    std::cout << "\033[1;96m<<<<<--- Default constructor "
                 "and destructor in stack --->>>>>" << COLOR_CLEAR << std::endl;
    {
        ScavTrap defaultScavTrap;
        defaultScavTrap.attack("Brick wall");
        defaultScavTrap.beRepaired(1);
        defaultScavTrap.takeDamage(20);
        std::cout << defaultScavTrap << std::endl;
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    std::cout << "\033[1;96m<<<<<--- Copy Constructor Work Test "
                 "in stack --->>>>>" << COLOR_CLEAR << std::endl;
    {
        ScavTrap original("Original");
        ScavTrap clone(original);
        clone.attack("Invisible wall");
        std::cout << clone << std::endl;
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    std::cout << "\033[1;96m<<<<<--- ClapTrap "
                 "individuality --->>>>>" << COLOR_CLEAR << std::endl;
    {
        ClapTrap clapTrapJohn("John");
        clapTrapJohn.attack("Brick wall");
        clapTrapJohn.beRepaired(1);
        clapTrapJohn.takeDamage(10);
        std::cout << clapTrapJohn << std::endl;
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    std::cout << "\033[1;96m<<<<<--- Test with object on heap "
                 " --->>>>>" << COLOR_CLEAR << std::endl;

    ScavTrap *scavTrap = new ScavTrap("Bob");
    std::cout << *scavTrap << std::endl;

    scavTrap->guardGate();
    delete scavTrap;
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    return 0;
}
