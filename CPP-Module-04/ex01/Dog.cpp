
#include "Dog.hpp"

void Dog::makeSound() const {
    std::cout << "The Dog says " << COLOR_YELLOW << "Woof Woof!"
              << COLOR_CLEAR << std::endl;
}

Dog::Dog() {
    type_ = "Dog";

    std::cout  << type_ <<  COLOR_GREEN << " created in Dog Constructor"
              << COLOR_CLEAR << std::endl;
}

Dog::Dog(const Dog &copy)  : Animal(copy) {
    type_ = copy.type_;
    std::cout << "Dog Copy Constructor called." << std::endl;
}

Dog::~Dog() {
    std::cout << type_ << COLOR_RED << " destroyed like Dog"
              << COLOR_CLEAR << std::endl;
}

Dog &Dog::operator=(const Dog &assign) {
    std::cout << "Dog Assigment Operator called." << std::endl;
    if (this != &assign) {
        type_ = assign.type_;
    }
    return *this;
}
