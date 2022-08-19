#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() {
    std::cout << "Default Constructor called of PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
    std::cout << "Copy Constructor called of PresidentialPardonForm" << std::endl;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor called of PresidentialPardonForm" << std::endl;
}

// Operators
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign) {
    std::cout << "Assigment operator called of PresidentialPardonForm" << std::endl;
    return *this;
}

// Getters / Setters

//Member functions
