#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon &weapon) : weaponRef_(weapon) {
    name_ = name;
}

void HumanA::attack() {
    std::cout << name_ + " attacks with their " +
                        weaponRef_.getType() << std::endl;
}

HumanA::~HumanA() {}
