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
            Form *rrf;

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
    std::cout << COLOR_GREEN << "<<<-Test2: Non-existent form->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Boris", 1);
        std::cout << bureaucrat << std::endl;
        try {
            Intern someRandomIntern;
            Form *wrongf;

            wrongf = someRandomIntern.makeForm("wrong request", "Bender");
            std::cout << wrongf << std::endl;
            Form *wrongf2 = someRandomIntern.makeForm("", "Tree");
            std::cout << wrongf2 << std::endl;

            delete wrongf;
            delete wrongf2;

        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }
    // **************************** Test 3 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test2: Other kinds of form->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Boris", 50);
        std::cout << bureaucrat << std::endl;
        try {
            Intern someRandomIntern;
            Form *rrf;
            Form *scf;
            Form *ppf;

            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            std::cout << *rrf << std::endl;
            ppf = someRandomIntern.makeForm("presidential request", "Garry");
            std::cout << *ppf << std::endl;
            scf = someRandomIntern.makeForm("shrubbery request", "Village");
            std::cout << *scf << std::endl;

            try {
                bureaucrat.signForm(*ppf);
                bureaucrat.executeForm(*ppf);

                bureaucrat.signForm(*rrf);
                bureaucrat.executeForm(*rrf);

                bureaucrat.signForm(*scf);
                bureaucrat.executeForm(*scf);
            } catch (std::exception &e) {
                std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
            }

            delete rrf;
            delete scf;
            delete ppf;

        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }


}
