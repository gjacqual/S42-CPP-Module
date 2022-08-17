#include "WrongCat.hpp"

void WrongCat::makeSound() const {
    std::cout << "The WRONG Cat says " << COLOR_YELLOW << "KuKaReKu!!!"
              << COLOR_CLEAR << std::endl;
}

WrongCat::WrongCat() {
    type_ = "Wrong Cat";
    std::cout << type_ << COLOR_GREEN << " created in WRONG Cat Constructor"
              << COLOR_CLEAR << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    type_ = copy.type_;
    std::cout << "WRONG Cat Copy Constructor called." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << type_ << COLOR_RED << " destroyed like WRONG Cat"
              << COLOR_CLEAR << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign) {
    std::cout << "WRONG Cat Assigment Operator called." << std::endl;
    if (this != &assign) {
        type_ = assign.type_;
    }
    return *this;
}
