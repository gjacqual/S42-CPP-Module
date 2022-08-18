#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP

#include <iostream>

//Color Escape Codes

#define COLOR_CLEAR     "\033[0m"
#define COLOR_RED       "\033[1;31m"
#define COLOR_GREEN     "\033[0;32m"
#define COLOR_YELLOW    "\033[0;33m"
#define COLOR_PURPLE    "\033[0;35m"

class WrongAnimal {
public:
    // Constructors
    WrongAnimal();

    WrongAnimal(const WrongAnimal &copy);

    // Destructor
    virtual ~WrongAnimal();

    // Operators
    WrongAnimal &operator=(const WrongAnimal &assign);

    // Getters / Setters
    const std::string &getType() const;

    void makeSound() const;

protected:
    std::string type_;
};


#endif //EX00_WRONGANIMAL_HPP
