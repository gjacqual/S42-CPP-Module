#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat() : _grade() {
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name) {
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name) {
    std::cout << "Copy Constructor called of Bureaucrat" << std::endl;
    _grade = copy._grade;
}

// Destructor
Bureaucrat::~Bureaucrat() {
}

// Operators
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign) {
    std::cout << "Assigment operator called of Bureaucrat" << std::endl;
    if (this != &assign) {
        const_cast<std::string &>(_name) = assign._name;
        _grade = assign._grade;
    }
    return *this;
}

// Getters / Setters
const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

//Member functions
void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        --_grade;
}

void Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        ++_grade;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << _name << COLOR_GREEN << " signed " << COLOR_CLEAR
                  << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cerr << _name << COLOR_RED << " couldn’t sign " << COLOR_CLEAR
                  << form.getName() << " because "
                  << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form) const {
    try {
        form.execute(*this);
        std::cout << _name << COLOR_GREEN << " execute " << COLOR_CLEAR
                  << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cerr << _name << COLOR_RED << " cannot execute " << COLOR_CLEAR
                  << form.getName() << " because "
                  << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
    }
}


const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade Too High.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade Too Low.");
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade: "
       << bureaucrat.getGrade() << std::endl;
    return os;
}
