#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
    explicit Zombie(std::string name);
    void announce(void);
    ~Zombie();
private:
    std::string name_;
};

#endif //ZOMBIE_HPP
