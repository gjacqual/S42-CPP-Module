#include "Cat.hpp"

void Cat::makeSound() const {
    std::cout << "The Cat says " << COLOR_YELLOW << "Meow!"
              << COLOR_CLEAR << std::endl;
}

Cat::Cat() {
    type_ = "Cat";
    std::cout << type_ << COLOR_GREEN << " created in Cat Constructor"
              << COLOR_CLEAR << std::endl;
    brain_ = new Brain;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat Copy Constructor called." << std::endl;
    type_ = copy.type_;
    brain_ = new Brain(*copy.brain_);
//    *brain_ = *copy.brain_;
}

Cat::~Cat() {
    std::cout << type_ << COLOR_RED << " destroyed like Cat"
              << COLOR_CLEAR << std::endl;
    delete brain_;
}

Cat &Cat::operator=(const Cat &assign) {
    std::cout << "Cat Assigment Operator called." << std::endl;
    if (this != &assign) {
        delete brain_;
        type_ = assign.type_;
        brain_ = new Brain(*assign.brain_);
    }
    return *this;
}

const std::string &Cat::getIdea(int i) const {
    return brain_->getIdea(i);
}

void Cat::setIdea(int i, const std::string &idea) {
    brain_->setIdea(i, idea);
}
