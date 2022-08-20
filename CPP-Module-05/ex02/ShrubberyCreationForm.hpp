#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
public:
    // Constructors
    ShrubberyCreationForm();

    explicit ShrubberyCreationForm(std::string target);

    ShrubberyCreationForm(const ShrubberyCreationForm &copy);

    // Destructor
    ~ShrubberyCreationForm();

    // Operators
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);

    //Member functions

    void execute(Bureaucrat const &executor) const;

    const std::string &getTarget() const;

    class FileNotOpenException : public std::exception {
        const char *what() const throw();
    };
    class FileNotWriteException : public std::exception {
        const char *what() const throw();
    };


private:
    const std::string _target;

};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
