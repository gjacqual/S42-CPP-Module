#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
    std::string names[13] = {"Mitchel First", "Fred", "Ivan", "Vasily", "Peter",
                             "Charly", "Tom", "Dude", "Cooper", "Hugo", "Kim",
                             "Molder", "Lucky Guy"};

    // Creating a horde of zombies
    std::cout << "CREATOR: I think I'll create a horde of zombies------------|";
    std::cout << std::endl;
    Zombie* zombieArray = zombieHorde(13, "Cannon Fodder");

    // Rename the zombies to distinguish them
    std::cout << "CREATOR: I need to give each zombie a unique name----------|";
    std::cout << std::endl;
    for (int i = 0; i < 13; i++) {
        zombieArray[i].setName(names[i]);
    }

    // Starting the roll call
    std::cout << "CREATOR: My horde of zombies, respond in turn!!!-----------|";
    std::cout << std::endl;
    for (int i = 0; i < 13; i++) {
        zombieArray[i].announce();
    }

    // I don't need zombies anymore
    std::cout << "CREATOR: It's time to Say GOODBYE!!!-----------------------|";
    std::cout << std::endl;
    delete[] zombieArray;

    return 0;
}
