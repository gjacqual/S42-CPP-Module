#include "Dog.hpp"

void Dog::makeSound() const {
    std::cout << "The Dog says " << COLOR_YELLOW << "Woof Woof!"
              << COLOR_CLEAR << std::endl;
}

Dog::Dog() {
    type_ = "Dog";
    std::cout << type_ << COLOR_GREEN << " created in Dog Constructor"
              << COLOR_CLEAR << std::endl;
    brain_ = new Brain;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog Copy Constructor called." << std::endl;
    type_ = copy.type_;
//    brain_ = copy.brain_;  //  it's shallow copy
    brain_ = new Brain(*copy.brain_); //  it's deep copy
}

Dog::~Dog() {
    std::cout << type_ << COLOR_RED << " destroyed like Dog"
              << COLOR_CLEAR << std::endl;
    delete brain_;
}

Dog &Dog::operator=(const Dog &assign) {
    std::cout << "Dog Assigment Operator called." << std::endl;
    if (this != &assign) {
        type_ = assign.type_;
        brain_ = new Brain(*assign.brain_);
    }
    return *this;
}

const std::string &Dog::getIdea(int i) const {
    return brain_->getIdea(i);
}

void Dog::setIdea(int i, const std::string &idea) {
    brain_->setIdea(i, idea);
}
