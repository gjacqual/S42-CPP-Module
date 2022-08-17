#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
    std::cout << COLOR_BLUE << "ScavTrap is now in Gate keeper mode."
              << COLOR_CLEAR << std::endl;
}

//Constructors
ScavTrap::ScavTrap() {
    name_ = "Default";
    hitPoints_ = 100;
    energyPoints_ = 50;
    attackDamage_ = 20;
    std::cout << "ScavTrap default has just been " << COLOR_GREEN
              << "created" << COLOR_CLEAR << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    ClapTrap::hitPoints_ = 100;
    ClapTrap::energyPoints_ = 50;
    ClapTrap::attackDamage_ = 20;
    std::cout << "ScavTrap has just been " << COLOR_GREEN
              << "created" << COLOR_CLEAR << " and named "
              << COLOR_YELLOW << name_ << COLOR_CLEAR << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object) {
    *this = object;
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

//Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << COLOR_YELLOW << name_ << COLOR_CLEAR
              << " destroyed!" << std::endl;
}

//Methods
void ScavTrap::attack(const std::string &target) {
    if (hitPoints_ == 0) {
        std::cout << "ScavTrap " << name_ << COLOR_RED
                  << " fell and can't get up. He can't attack. Hit Points: "
                  << hitPoints_
                  << COLOR_CLEAR << std::endl;
        return;
    }
    if (energyPoints_ == 0)
        std::cout << "ScavTrap " << name_ << COLOR_RED << " tired and can't fight"
                  << COLOR_CLEAR << std::endl;
    else {
        --energyPoints_;
        std::cout << "ScavTrap " << name_ << COLOR_RED << " ATTACKS "
                  << COLOR_YELLOW << target << COLOR_CLEAR
                  << ", causing " << this->getAttackDamage() << " points of damage!"
                  << std::endl;
    }
}

//Operators
ScavTrap &ScavTrap::operator=(const ScavTrap &assign) {
    std::cout << "FragTrap Operator= called" << std::endl;
    if (this != &assign) {
        name_ = assign.name_;
        hitPoints_ = assign.hitPoints_;
        energyPoints_ = assign.energyPoints_;
        attackDamage_ = assign.attackDamage_;
    }
    return *this;
}






