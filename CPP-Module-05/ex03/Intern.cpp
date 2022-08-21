#include "Intern.hpp"


// Constructors
Intern::Intern() {}

Intern::Intern(const Intern &copy) {
    *this = copy;
    std::cout << "Copy Constructor called of Intern" << std::endl;
}

// Destructor
Intern::~Intern() {}

// Operators
Intern &Intern::operator=(const Intern &) {

    std::cout << "Assigment operator called of Intern" << std::endl;
//    (void) assign;
    return *this;
}

//Member functions
Form *Intern::makeForm(std::string formName, std::string formTarget) {

    std::string requestArray[3] = {
            "shrubbery request", "robotomy request", "presidential request"
    };
    std::string formNames[3] = {
            "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"
    };

    Form *(Intern::*forms[3])(std::string formTarget) = {
            &Intern::callShrubberyCreationForm,
            &Intern::callRobotomyRequestForm,
            &Intern::callPresidentialPardonForm
    };
    
    int result = -1;
    for (int i = 0; i < 3; ++i) {
        if (formName == requestArray[i])
            result = i;
    }
    if (result < 0)
        throw FormKindNotFoundException();
    std::cout << "Intern creates " << formNames[result] << " with target: "
              << formTarget << std::endl;
    switch (result) {
        case 0:
            return (this->*(forms[0]))(formTarget);
        case 1:
            return (this->*(forms[1]))(formTarget);
        case 2:
            return (this->*(forms[2]))(formTarget);
        default:
            throw FormKindNotFoundException();
    }
}

Form *Intern::callShrubberyCreationForm(std::string formTarget) {
    return new ShrubberyCreationForm(formTarget);
}

Form *Intern::callRobotomyRequestForm(std::string formTarget) {
    return new RobotomyRequestForm(formTarget);
}

Form *Intern::callPresidentialPardonForm(std::string formTarget) {
    return new PresidentialPardonForm(formTarget);
}

const char *Intern::FormKindNotFoundException::what() const throw() {
    return ("Exception: Form kind not found");
}
