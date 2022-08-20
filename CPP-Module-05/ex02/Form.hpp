#ifndef EX02_FORM_HPP
#define EX02_FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:

    // Constructors
    Form();

    Form(const std::string &name, int gradeToSign, int gradeToExecute);

    Form(const Form &copy);

    // Destructor
    ~Form();

    // Operators
    Form &operator=(const Form &assign);

    // Getters / Setters
    const std::string &getName() const;

    bool getSignStatus() const;

    int getGradeToSign() const;

    int getGradeToExecute() const;

    virtual const std::string &getTarget() const = 0;

    //Member functions
    void beSigned(Bureaucrat &bureaucrat);

    virtual void execute(Bureaucrat const &executor) const = 0;

    void checkRequirements(const Bureaucrat &executor) const;


    //Exceptions
    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

    class FormNotSignedException : public std::exception {
        const char *what() const throw();
    };

private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
};

//Overload of the insertion («)
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX02_FORM_HPP
