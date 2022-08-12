#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void) {

    // Create a zombie on the stack and let it announce itself
    Zombie zombieStack("Bill FirstInStack");
    zombieStack.announce();

    // Create a zombie in the heap and let it announce itself
    Zombie* zombieHeap = newZombie("Karl FirstInHeap");
    zombieHeap->announce();

    // Zombies on the stack are destroyed after the completion of the function
    randomChump("Frankie SecondInStack");

    // Zombies in the heap live until they are forcibly removed
    delete zombieHeap;

    // Robert FirstInStack Robert will be destroyed
    return 0;
}
