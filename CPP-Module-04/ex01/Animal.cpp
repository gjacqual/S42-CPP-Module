
#include "Animal.hpp"

void Animal::makeSound() const {
    std::cout << "The Animal made a " << COLOR_YELLOW << "sound!"
              << COLOR_CLEAR << std::endl;
}

Animal::Animal() : type_("Animal") {
    std::cout << "Default " << type_ << COLOR_GREEN << " created"
              << COLOR_CLEAR << std::endl;
}

Animal::Animal(const Animal &copy) : type_(copy.type_) {
    std::cout << "Animal Copy Constructor called." << std::endl;
}

const std::string &Animal::getType() const {
    return type_;
}

Animal::~Animal() {
    std::cout << type_ << COLOR_RED << " destroyed"
              << COLOR_CLEAR << std::endl;
}

Animal &Animal::operator=(const Animal &assign) {
    std::cout << "Animal Assigment Operator called." << std::endl;
    if (this != &assign) {
        type_ = assign.type_;
    }
    return *this;
}
