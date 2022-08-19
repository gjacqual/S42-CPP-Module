#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() {
    std::cout << "Default Constructor called of RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
    std::cout << "Copy Constructor called of RobotomyRequestForm" << std::endl;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor called of RobotomyRequestForm" << std::endl;
}

// Operators
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign) {
    std::cout << "Assigment operator called of RobotomyRequestForm" << std::endl;
    return *this;
}

// Getters / Setters

//Member functions
