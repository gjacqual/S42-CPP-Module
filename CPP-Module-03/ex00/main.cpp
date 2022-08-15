#include "ClapTrap.hpp"

int main(void) {
    std::cout << "\033[1;96m<<<<<--- Default constructor "
                 "and destructor test --->>>>>" << COLOR_CLEAR << std::endl;
    ClapTrap *clapTrapDefault = new ClapTrap();
    std::cout << *clapTrapDefault;
    delete clapTrapDefault;
    std::cout << std::endl;

    std::cout << "\033[1;96m<<<<<--- Constructor With Parameters test "
                 "--->>>>>" << COLOR_CLEAR << std::endl;
    ClapTrap* clapTrapChuck = new ClapTrap("Chuck");
    std::cout << *clapTrapChuck;
    ClapTrap clapTrapRocky("Rocky");
    std::cout << clapTrapRocky;

    // Copy Constructor Test
    ClapTrap clapTrapChuckBro(*clapTrapChuck);
    clapTrapChuckBro.setName("Bro of Chuck ");
    std::cout << clapTrapChuckBro;

    //Battle Test
    clapTrapChuck->attack("Vampire");
    clapTrapChuck->takeDamage(9);
    clapTrapChuck->beRepaired(4);
    std::cout << *clapTrapChuck;

    delete clapTrapChuck;
    return 0;
}
