#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:

    // Constructors
    Intern();

    Intern(const Intern &copy);

    // Destructor
    ~Intern();

    // Operators
    Intern &operator=(const Intern &assign);

    //Member functions
    Form *makeForm(std::string formName, std::string formTarget);

    class FormKindNotFoundException : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    Form *callShrubberyCreationForm(std::string formTarget);

    Form *callRobotomyRequestForm(std::string formTarget);

    Form *callPresidentialPardonForm(std::string formTarget);
};

#endif //EX03_INTERN_HPP
