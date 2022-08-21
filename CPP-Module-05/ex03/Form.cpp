#include "Form.hpp"

// Constructors
Form::Form() : _name("Empty Form"), _signed(false), _gradeToSign(150),
               _gradeToExecute(150) {}

Form::Form(const std::string &name, const int gradeToSign,
           const int gradeToExecute) : _name(name),
                                       _gradeToSign(gradeToSign),
                                       _gradeToExecute(gradeToExecute) {
    _signed = false;
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    else if (_gradeToSign < 1 || _gradeToExecute < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed),
                               _gradeToSign(copy._gradeToSign),
                               _gradeToExecute(copy._gradeToExecute) {
    std::cout << "Form Copy Constructor called!" << std::endl;
}

// Destructor
Form::~Form() {}

// Operators
Form &Form::operator=(const Form &assign) {
    if (this != &assign)
        _signed = assign._signed;
    return *this;
}

// Getters / Setters
const std::string &Form::getName() const {
    return _name;
}

bool Form::getSignStatus() const {
    return _signed;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

//Member functions
void Form::beSigned(Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() <= getGradeToSign())
        _signed = true;
    else
        throw GradeTooHighException();
}

void Form::checkRequirements(const Bureaucrat &executor) const {
    if (!_signed)
        throw FormNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw GradeTooHighException();
}


//Overload of the insertion («)
std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form: " << form.getName() << ", Target:" << form.getTarget()
       << ", Signed: " << (form.getSignStatus() ? "Yes" : "No")
       << ", required grade to sign: " << form.getGradeToSign()
       << ", required grade to execute: " << form.getGradeToExecute();
    return os;
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade of the Form is too High.");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade of the Form is too Low.");
}

const char *Form::FormNotSignedException::what() const throw() {
    return ("Exception: The form is not signed.");
}
