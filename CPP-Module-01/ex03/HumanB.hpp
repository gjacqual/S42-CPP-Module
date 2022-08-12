#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
    explicit HumanB(const std::string& name);
    void attack();
    void setWeapon(Weapon &weapon);
    ~HumanB();

private:
    std::string name_;
    Weapon *weaponPtr_;
};

#endif //EX03_HUMANB_HPP
