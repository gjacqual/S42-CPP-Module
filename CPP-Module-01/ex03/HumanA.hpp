#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(const std::string& name, Weapon &weapon);
    void attack();
    ~HumanA();

private:
    std::string name_;
    Weapon &weaponRef_;
};

#endif //EX03_HUMANA_HPP
