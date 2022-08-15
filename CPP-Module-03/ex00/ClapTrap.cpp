#include "ClapTrap.hpp"

//Constructors
ClapTrap::ClapTrap(void) : hitPoints_(10), energyPoints_(10), attackDamage_(0) {
    name_ = "Default";
    std::cout << "ClapTrap default has just been "<< COLOR_GREEN
    << "created" << COLOR_CLEAR << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name_(name) {
    hitPoints_ = 10;
    energyPoints_ = 10;
    attackDamage_ = 0;
    std::cout << "ClapTrap has just been " << COLOR_GREEN
            << "created" << COLOR_CLEAR << " and named "
              << COLOR_YELLOW << name_ << COLOR_CLEAR << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object) {
    *this = object;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

//Operators
ClapTrap &ClapTrap::operator=(const ClapTrap &assign) {
    if (this != &assign) {
        name_ = assign.name_;
        hitPoints_ = assign.hitPoints_;
        energyPoints_ = assign.energyPoints_;
        attackDamage_ = assign.attackDamage_;
    }
    return *this;
}

//Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << COLOR_YELLOW << name_ << COLOR_CLEAR
              << " destroyed!" << std::endl;
}

// Getters / Setters
const std::string &ClapTrap::getName() const {
    return name_;
}

void ClapTrap::setName(const std::string &name) {
    name_ = name;
}

int ClapTrap::getHitPoints() const {
    return hitPoints_;
}

void ClapTrap::setHitPoints(int hitPoints) {
    hitPoints_ = hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return energyPoints_;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
    energyPoints_ = energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return attackDamage_;
}

void ClapTrap::setAttackDamage(int attackDamage) {
    attackDamage_ = attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap" << name_ << COLOR_RED << " ATTACKS "
              << target << COLOR_CLEAR << std::endl;
    if (energyPoints_ == 0)
            std::cout << "ClapTrap " << name_ << "tired and can't fight" << std::endl;


                    << ", causing " << this->getAttackDamage() << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints_ -= amount;
    std::cout << "ClapTrap " << name_ << COLOR_RED << " takes " << amount
              << " points of damage" << COLOR_CLEAR << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    hitPoints_ += amount;
    std::cout << "ClapTrap " << name_
              << " the man took a pill and " << COLOR_SPECIAL << " restored " <<
              amount << " points " << COLOR_CLEAR << " of Health " << std::endl;
}

std::ostream &operator<<(std::ostream &ostream, const ClapTrap &object) {
    ostream << "Name: " << object.getName()
            << " | Hit Points: " << object.getHitPoints()
            << " | Energy: " << object.getEnergyPoints()
            << " | Attack Damage: " << object.getAttackDamage() << std::endl;
    return ostream;
}





