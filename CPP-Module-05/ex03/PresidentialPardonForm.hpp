#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {
public:
    // Constructors
    PresidentialPardonForm();

    explicit PresidentialPardonForm(std::string target);

    PresidentialPardonForm(const PresidentialPardonForm &copy);

    // Destructor
    ~PresidentialPardonForm();

    // Operators
    PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);

    //Member functions

    void execute(Bureaucrat const &executor) const;

    const std::string &getTarget() const;

private:
    const std::string _target;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
