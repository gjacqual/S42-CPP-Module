
#include "Cat.hpp"

void Cat::makeSound() const{
    std::cout << "The Cat says " << COLOR_YELLOW << "Meow!"
              << COLOR_CLEAR << std::endl;
}

Cat::Cat() {
    type_ = "Cat";
    std::cout  << type_ <<  COLOR_GREEN << " created in Cat Constructor"
               << COLOR_CLEAR << std::endl;
}

Cat::Cat(const Cat &copy)  : Animal(copy) {
    type_ = copy.type_;
    std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat::~Cat() {
    std::cout << type_ << COLOR_RED << " destroyed like Cat"
              << COLOR_CLEAR << std::endl;
}

Cat &Cat::operator=(const Cat &assign) {
    std::cout << "Cat Assigment Operator called." << std::endl;
    if (this != &assign) {
        type_ = assign.type_;
    }
    return *this;
}
