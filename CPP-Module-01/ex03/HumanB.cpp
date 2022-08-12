#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name_(name), weaponPtr_(NULL) {}

void HumanB::setWeapon(Weapon &weapon) {
    weaponPtr_ = &weapon;
}

void HumanB::attack() {
    std::cout << name_ + " attacks with their " +  weaponPtr_->getType() << std::endl;
}

HumanB::~HumanB() {}
