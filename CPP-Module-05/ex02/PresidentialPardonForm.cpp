#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() :
        Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        Form("PresidentialPardonForm", 25, 5),
        _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
        Form(copy), _target(copy._target) {}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}

// Operators
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign) {
    if (this != &assign) {
        Form::operator=(assign);
        const_cast<std::string &>(_target) = assign._target;
    }
    return *this;
}

//Member functions
void PresidentialPardonForm::execute(const Bureaucrat &executor) const {

    checkRequirements(executor);
    std::cout << COLOR_YELLOW << _target
    << " has been pardoned by Zaphod Beeblebrox!" << COLOR_CLEAR <<  std::endl;
}

// Getters / Setters

const std::string &PresidentialPardonForm::getTarget() const {
    return _target;
}