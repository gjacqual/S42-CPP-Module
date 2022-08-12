
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    name_ = name;
    std::cout << name_ + " is created!" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name_ + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name_ + " is destroyed!" << std::endl;
}
