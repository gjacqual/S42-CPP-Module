#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <iostream>

//Color Escape Codes

#define COLOR_CLEAR     "\033[0m"
#define COLOR_RED       "\033[1;31m"
#define COLOR_GREEN     "\033[0;32m"
#define COLOR_YELLOW    "\033[0;33m"
#define COLOR_BLUE      "\033[0;34m"
#define COLOR_PURPLE    "\033[0;35m"
#define COLOR_SPECIAL   "\033[0;96m"


class ClapTrap {
public:
    //Constructors
    ClapTrap();

    ClapTrap(const std::string &name);

    ClapTrap(const ClapTrap &object);

    //Operators
    ClapTrap &operator=(const ClapTrap &assign);

    //Destructor
    ~ClapTrap();

    // Getters / Setters
    const std::string &getName() const;

    void setName(const std::string &name);

    unsigned int getHitPoints() const;

    void setHitPoints(unsigned int hitPoints);

    unsigned int getEnergyPoints() const;

    void setEnergyPoints(unsigned int energyPoints);

    unsigned int getAttackDamage() const;

    void setAttackDamage(unsigned int attackDamage);

    //Methods
    void attack(const std::string &target);

    void takeDamage(unsigned int amount);

    void beRepaired(unsigned int amount);

protected:
    std::string name_;
    // health of the ClapTrap
    unsigned int hitPoints_;
    // Muscle fatigue
    unsigned int energyPoints_;
    // How much damage can it do to the enemy
    unsigned int attackDamage_;
};

std::ostream &operator<<(std::ostream &ostream, const ClapTrap &object);


#endif //EX01_CLAPTRAP_HPP
