
#include "WrongAnimal.hpp"

void WrongAnimal::makeSound() const {
    std::cout << "WRONG Animal made a " << COLOR_PURPLE << "WRONG sound!"
              << COLOR_CLEAR << std::endl;
}

WrongAnimal::WrongAnimal() : type_("WRONG Animal") {
    std::cout << "Default Wrong " << type_ << COLOR_GREEN << " created"
              << COLOR_CLEAR << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type_(copy.type_) {
    std::cout << "WRONG Animal Copy Constructor called." << std::endl;
}

const std::string &WrongAnimal::getType() const {
    return type_;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WRONG Animal - " << type_ << COLOR_RED << " destroyed"
              << COLOR_CLEAR << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign) {
    std::cout << "WRONG Animal Assigment Operator called." << std::endl;
    if (this != &assign) {
        type_ = assign.type_;
    }
    return *this;
}
