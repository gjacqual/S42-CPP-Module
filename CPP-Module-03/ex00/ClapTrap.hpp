#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

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

    int getHitPoints() const;

    void setHitPoints(int hitPoints);

    int getEnergyPoints() const;

    void setEnergyPoints(int energyPoints);

    int getAttackDamage() const;

    void setAttackDamage(int attackDamage);

    //Methods
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string name_;
    int         hitPoints_; // health of the ClapTrap
    int         energyPoints_;
    int         attackDamage_;
};

std::ostream &operator<<(std::ostream &ostream, const ClapTrap &object);


#endif //EX00_CLAPTRAP_HPP
