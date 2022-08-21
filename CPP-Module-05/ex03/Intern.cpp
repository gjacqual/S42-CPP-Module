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
Intern &Intern::operator=(const Intern &assign) {

    std::cout << "Assigment operator called of Intern" << std::endl;
    if (this != &assign)
        *this = assign;
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
            return (new ShrubberyCreationForm(formTarget));
        case 1:
            return (new RobotomyRequestForm(formTarget));
        case 2:
            return (new PresidentialPardonForm(formTarget));
        default:
            throw FormKindNotFoundException();
    }
}

const char *Intern::FormKindNotFoundException::what(void) const throw() {
    return ("Exception: Form kind not found");
}
