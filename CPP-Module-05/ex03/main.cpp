#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    // **************************** Test 1 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: From Subject->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Boris", 37);
        std::cout << bureaucrat << std::endl;
        try {
            Intern someRandomIntern;
            Form* rrf;

            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            std::cout << *rrf << std::endl;

            bureaucrat.signForm(*rrf);
            bureaucrat.executeForm(*rrf);

            delete rrf;

        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }
    // **************************** Test 2 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: All Kinds and non-existent form->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Boris", 137);
        std::cout << bureaucrat << std::endl;
        try {
            Intern someRandomIntern;
//            Form* rrf;
//            Form* scf;
            Form* wrongf;
//            Form* ppf;

//            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
//            std::cout << *rrf << std::endl;
//            ppf = someRandomIntern.makeForm("presidential request", "Garry");
//            std::cout << *ppf << std::endl;
            wrongf = someRandomIntern.makeForm("wrong request", "Bender");
            std::cout << *wrongf << std::endl;
//            scf = someRandomIntern.makeForm("shrubbery request", "Village");
//            std::cout << *scf << std::endl;



//            delete rrf;
//            delete scf;
//            delete ppf;

        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }


}
