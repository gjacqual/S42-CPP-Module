#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>

class Weapon {
public:
    explicit Weapon(const std::string &type);
    const std::string &getType() const;
    void setType(const std::string &type);
    ~Weapon();

private:
    std::string type_;
};

#endif //EX03_WEAPON_HPP
