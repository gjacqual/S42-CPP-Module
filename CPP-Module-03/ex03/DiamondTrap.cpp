#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI() {
    std::cout << COLOR_PURPLE "- Who Am I?" << COLOR_CLEAR << std::endl;

    std::cout << COLOR_PURPLE "- Your name is " << name_
              << " and your ClapTrap's name is " << ClapTrap::name_
              << COLOR_CLEAR << std::endl;
}

DiamondTrap::DiamondTrap() {
    ClapTrap::name_ = "Default_clap_name";
    name_ = "Default";
    hitPoints_ = FragTrap::hitPoints_;
    energyPoints_ = ScavTrap::energyPoints_;
    attackDamage_ = FragTrap::attackDamage_;
    std::cout << "DiamondTrap default has just been " << COLOR_GREEN
              << "created" << COLOR_CLEAR << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    name_ = name;
    hitPoints_ = FragTrap::hitPoints_;
    energyPoints_ = ScavTrap::energyPoints_;
    attackDamage_ = FragTrap::attackDamage_;
    std::cout << "DiamondTrap has just been " << COLOR_GREEN
              << "created" << COLOR_CLEAR << " and named "
              << COLOR_YELLOW << name_ << COLOR_CLEAR << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &object) : ClapTrap(object), ScavTrap(object), FragTrap(object) {
    *this = object;
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign) {
    std::cout << "DiamondTrap Operator= called" << std::endl;
    if (this != &assign) {
        name_ = assign.name_;
        ClapTrap::name_ = assign.ClapTrap::name_;
        hitPoints_ = assign.hitPoints_;
        energyPoints_ = assign.energyPoints_;
        attackDamage_ = assign.attackDamage_;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << COLOR_YELLOW << name_ << COLOR_CLEAR
              << " destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

const std::string &DiamondTrap::getDiamondTrapName() const {
    return name_;
}

