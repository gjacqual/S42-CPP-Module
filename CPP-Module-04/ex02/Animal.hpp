#ifndef EX02_ANIMAL_HPP
#define EX02_ANIMAL_HPP

#include <iostream>

//Color Escape Codes

#define COLOR_CLEAR     "\033[0m"
#define COLOR_RED       "\033[1;31m"
#define COLOR_GREEN     "\033[0;32m"
#define COLOR_YELLOW    "\033[0;33m"
#define COLOR_PURPLE    "\033[0;35m"
#define COLOR_BLUE      "\033[0;34m"

class Animal {
public:
    // Constructors
    Animal();

    Animal(const Animal &copy);

    // Destructor
    virtual ~Animal();

    // Operators
    Animal &operator=(const Animal &assign);

    // Getters / Setters
    const std::string &getType() const;

    // pure virtual function
    virtual void makeSound() const = 0;

protected:
    std::string type_;
};

#endif //EX02_ANIMAL_HPP
