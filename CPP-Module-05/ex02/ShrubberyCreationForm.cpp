#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() {
    std::cout << "Default Constructor called of ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
    std::cout << "Copy Constructor called of ShrubberyCreationForm" << std::endl;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor called of ShrubberyCreationForm" << std::endl;
}

// Operators
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
    std::cout << "Assigment operator called of ShrubberyCreationForm" << std::endl;
    return *this;
}

// Getters / Setters

//Member functions
