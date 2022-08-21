#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {
public:
    // Constructors
    RobotomyRequestForm();

    explicit RobotomyRequestForm(std::string target);

    RobotomyRequestForm(const RobotomyRequestForm &copy);

    // Destructor
    ~RobotomyRequestForm();

    // Operators
    RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);

    //Member functions

    void execute(Bureaucrat const &executor) const;

    const std::string &getTarget() const;

private:
    const std::string _target;
};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
