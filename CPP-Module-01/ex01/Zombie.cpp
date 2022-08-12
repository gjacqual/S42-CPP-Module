
#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Zombie is created!" << std::endl;
}

Zombie::Zombie(std::string name) {
    name_ = name;
    std::cout << name_ + " is created!" << std::endl;
}

void Zombie::setName(std::string name) {
    name_ = name;
}

void Zombie::announce(void) {
    std::cout << name_ + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name_ + " is destroyed!" << std::endl;
}


