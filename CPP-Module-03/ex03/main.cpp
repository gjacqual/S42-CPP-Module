#include "DiamondTrap.hpp"

int main(void) {

    std::cout << "\033[1;96m<<<<<--- Default constructor "
                 "and destructor in stack --->>>>>" << COLOR_CLEAR << std::endl;
    {
        DiamondTrap defaultDiamondTrap;
        defaultDiamondTrap.attack("Brick wall");
        defaultDiamondTrap.beRepaired(1);
        defaultDiamondTrap.takeDamage(20);
        defaultDiamondTrap.highFivesGuys();
        defaultDiamondTrap.guardGate();
        defaultDiamondTrap.whoAmI();
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    std::cout << "\033[1;96m<<<<<--- Test with object on heap "
                 " --->>>>>" << COLOR_CLEAR << std::endl;

    DiamondTrap *diamondTrap = new DiamondTrap("Di");
    std::cout << COLOR_GREEN << "It's Name:"
              << diamondTrap->getDiamondTrapName() << COLOR_CLEAR << std::endl;


    diamondTrap->highFivesGuys();
    diamondTrap->whoAmI();
    diamondTrap->attack("Enemy in Shadow");

    delete diamondTrap;
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

        std::cout << "\033[1;96m<<<<<--- Copy Constructor Work Test "
                 "in stack --->>>>>" << COLOR_CLEAR << std::endl;
    {
        DiamondTrap original("Original");
        DiamondTrap clone(original);
        clone.attack("Invisible wall");
        clone.highFivesGuys();
        std::cout << original << std::endl;
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;


    return 0;
}
