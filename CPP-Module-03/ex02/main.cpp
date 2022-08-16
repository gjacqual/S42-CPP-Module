#include "FragTrap.hpp"

int main(void) {

    std::cout << "\033[1;96m<<<<<--- Default constructor "
                 "and destructor in stack --->>>>>" << COLOR_CLEAR << std::endl;
    {
        FragTrap defaultFragTrap;
        defaultFragTrap.attack("Brick wall");
        defaultFragTrap.beRepaired(1);
        defaultFragTrap.takeDamage(20);
        std::cout << defaultFragTrap << std::endl;
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    std::cout << "\033[1;96m<<<<<--- Copy Constructor Work Test "
                 "in stack --->>>>>" << COLOR_CLEAR << std::endl;
    {
        FragTrap original("Original");
        FragTrap clone(original);
        clone.attack("Invisible wall");
        std::cout << clone << std::endl;
    }
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    std::cout << "\033[1;96m<<<<<--- Test with object on heap "
                 " --->>>>>" << COLOR_CLEAR << std::endl;

    FragTrap *fragTrap = new FragTrap("Bob");
    std::cout << *fragTrap << std::endl;

    fragTrap->highFivesGuys();
    delete FragTrap;
    std::cout << "\033[1;96m<<<<<---- End Test ---->>>>>" << COLOR_CLEAR << std::endl;

    return 0;
}
