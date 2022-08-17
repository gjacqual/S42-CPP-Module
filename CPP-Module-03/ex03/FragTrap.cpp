#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap() {
    name_ = "Default";
    ClapTrap::hitPoints_ = 100;
    ClapTrap::energyPoints_ = 100;
    ClapTrap::attackDamage_ = 30;
    std::cout << "FragTrap default has just been " << COLOR_GREEN
              << "created" << COLOR_CLEAR << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    ClapTrap::energyPoints_ = 100;
    ClapTrap::attackDamage_ = 30;
    std::cout << "FragTrap has just been " << COLOR_GREEN
              << "created" << COLOR_CLEAR << " and named "
              << COLOR_YELLOW << name_ << COLOR_CLEAR << std::endl;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object) {
    *this = object;
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

//Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << COLOR_YELLOW << name_ << COLOR_CLEAR
              << " destroyed!" << std::endl;
}

//Methods
void FragTrap::highFivesGuys(void) {
    std::cout << COLOR_SPECIAL << "High Fives Guys!" << COLOR_CLEAR << std::endl;
}

//Operators
FragTrap &FragTrap::operator=(const FragTrap &assign) {
    std::cout << "FragTrap Operator= called" << std::endl;
    if (this != &assign) {
        name_ = assign.name_;
        hitPoints_ = assign.hitPoints_;
        energyPoints_ = assign.energyPoints_;
        attackDamage_ = assign.attackDamage_;
    }
    return *this;
}
