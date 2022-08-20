#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() :
        Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        Form("RobotomyRequestForm", 72, 45),
        _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
        Form(copy), _target(copy._target) {}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}

// Operators
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign) {
    if (this != &assign) {
        Form::operator=(assign);
        const_cast<std::string &>(_target) = assign._target;
    }
    return *this;
}

//Member functions
void RobotomyRequestForm::execute(const Bureaucrat &executor) const {

    checkRequirements(executor);

    srand(time(NULL)); // use current time as seed for random generator
    std::cout << COLOR_YELLOW << "dr-r-r-r-r dr dr dr dzz-dzzzzz!!!"
              << COLOR_CLEAR << std::endl;
    int randomNumber = rand() % 2;
    if (randomNumber) {

    std::cout << COLOR_GREEN << _target
              << " has been robotomized successfully 50% of the time."
              << COLOR_CLEAR << std::endl;
    } else {
        std::cout << COLOR_RED
                  << " The robotomy of " << _target << " is failed!."
                  << COLOR_CLEAR << std::endl;
    }
}

// Getters / Setters

const std::string &RobotomyRequestForm::getTarget() const {
    return _target;
}
