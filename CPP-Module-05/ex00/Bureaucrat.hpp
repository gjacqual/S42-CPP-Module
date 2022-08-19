#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

# include <iostream>
# include <string>

#define COLOR_CLEAR     "\033[0m"
#define COLOR_RED       "\033[1;31m"
#define COLOR_GREEN     "\033[0;32m"
#define COLOR_YELLOW    "\033[0;33m"

class Bureaucrat {
public:

    // Constructors
    Bureaucrat();

    Bureaucrat(const std::string &name, int grade);

    Bureaucrat(const Bureaucrat &copy);

    // Destructor
    ~Bureaucrat();

    // Operators
    Bureaucrat &operator=(const Bureaucrat &assign);

    // Getters / Setters
    const std::string &getName() const;

    int getGrade() const;

    //Member functions

    void incrementGrade();

    void decrementGrade();

    class GradeTooHighException : public std::exception {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
        const char *what() const throw();
    };

private:
    const std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP
