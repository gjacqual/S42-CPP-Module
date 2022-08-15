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
    ClapTrap *clapTrapChuck = new ClapTrap("Chuck");
    std::cout << *clapTrapChuck << std::endl;
    ClapTrap clapTrapRocky("Rocky");
    std::cout << clapTrapRocky << std::endl;

    // Copy Constructor Test
    std::cout << "\033[1;96m<<<<<--- Copy Constructor Test "
                 "--->>>>>" << COLOR_CLEAR << std::endl;
    ClapTrap clapTrapChuckBro(*clapTrapChuck);
    clapTrapChuckBro.setName("Bro of Chuck ");
    std::cout << clapTrapChuckBro << std::endl;

    std::cout << "\033[1;96m<<<<<--- Member Functions Test "
                 "--->>>>>" << COLOR_CLEAR << std::endl;
    clapTrapChuck->attack("Brick wall");
    clapTrapChuck->takeDamage(10);
    std::cout << *clapTrapChuck << std::endl;
    clapTrapChuck->beRepaired(4);
    std::cout << *clapTrapChuck << std::endl;
    clapTrapChuck->attack("Another Brick wall");
    // the hit is more than the СlapTrap has health
    clapTrapChuck->takeDamage(10);
    std::cout << *clapTrapChuck << std::endl;
    //Finishing off the fallen СlapTrap
    clapTrapChuck->takeDamage(10);
    std::cout << *clapTrapChuck << std::endl;

    std::cout << "\033[1;96m<<<<<--- Will the beaten one be able to attack? "
                 "--->>>>>" << COLOR_CLEAR << std::endl;
    clapTrapChuck->attack("Brick wall");
    std::cout << *clapTrapChuck << std::endl;

    std::cout << "\033[1;96m<<<<<--- Fatigue test "
                 "--->>>>>" << COLOR_CLEAR << std::endl;
    clapTrapChuck->beRepaired(4);
    clapTrapChuck->beRepaired(4);
    clapTrapChuck->beRepaired(4);
    clapTrapChuck->attack("Brick wall");
    clapTrapChuck->attack("Brick wall");
    clapTrapChuck->attack("Brick wall");
    clapTrapChuck->attack("Brick wall");
    clapTrapChuck->attack("Brick wall");
    clapTrapChuck->beRepaired(1);
    std::cout << *clapTrapChuck << std::endl;

    delete clapTrapChuck;
    return 0;
}
