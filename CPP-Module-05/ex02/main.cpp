#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    // **************************** Test 0 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test0: Constructors, Copy, Assigment ->>>"
              << COLOR_CLEAR << std::endl;
    {
        ShrubberyCreationForm testForm;
        ShrubberyCreationForm copyForm("test");
        std::cout << "Before: " << std::endl;
        std::cout << testForm << std::endl;
        std::cout << copyForm << std::endl;

        testForm = copyForm;
        std::cout << "After: " << std::endl;
        std::cout << testForm << std::endl;
        std::cout << copyForm << std::endl;

        std::cout << "Copy Constructor: " << std::endl;

        ShrubberyCreationForm secondForm(testForm);
        std::cout << secondForm << std::endl;
    }
    // **************************** Test 1 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: Successful writing ASCII trees to file ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bureaucrat("Boris", 137);
            std::cout << bureaucrat << std::endl;

            ShrubberyCreationForm firstForm("home");
            std::cout << firstForm << std::endl;

//            firstForm.beSigned(bureaucrat);
//            std::cout << firstForm << std::endl;
//            firstForm.execute(bureaucrat);
            bureaucrat.signForm(firstForm);
            std::cout << firstForm << std::endl;
            bureaucrat.executeForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }

    // **************************** Test 2 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: Unsuccessful writing ASCII trees ->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Johnny Cage", 138);
        std::cout << bureaucrat << std::endl;
        try {
            ShrubberyCreationForm firstForm("garden");
            std::cout << firstForm << std::endl;

            bureaucrat.signForm(firstForm);
            std::cout << firstForm << std::endl;
            bureaucrat.executeForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

        std::cout << std::endl;
        Bureaucrat bureaucrat2("Liu Kang", 146);
        std::cout << bureaucrat2 << std::endl;
        try {


            ShrubberyCreationForm firstForm("garden");
            std::cout << firstForm << std::endl;
            bureaucrat2.signForm(firstForm);
            std::cout << firstForm << std::endl;
            bureaucrat2.executeForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

        std::cout << std::endl;
        Bureaucrat bureaucrat3("Shang Tsung", 2);
        std::cout << bureaucrat3 << std::endl;
        try {

            ShrubberyCreationForm firstForm("garden");
            std::cout << firstForm << std::endl;

            bureaucrat.signForm(firstForm);
            std::cout << firstForm << std::endl;
            bureaucrat3.executeForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }

    }
    // **************************** Test 3 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test3: Robotomy Request ->>>"
              << COLOR_CLEAR << std::endl;
    std::cout << "The chances of a successful lobotomy are 50%. "
                 "make several attempts to compare the results" << std::endl;
    {
        Bureaucrat bender("Bender", 71);
        std::cout << bender << std::endl;

        try {
            RobotomyRequestForm newForm("Fry");
            std::cout << newForm << std::endl;

            bender.signForm(newForm);
            std::cout << newForm << std::endl;
            bender.executeForm(newForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
        Bureaucrat zoidberg("Zoidberg", 40);
        std::cout << zoidberg << std::endl;
        RobotomyRequestForm newForm("Fry");
        std::cout << newForm << std::endl;
        try {
            zoidberg.signForm(newForm);
            std::cout << newForm << std::endl;
            zoidberg.executeForm(newForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
        std::cout << std::endl;
    }
    // **************************** Test 4 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test4: Presidential Pardon ->>>"
              << COLOR_CLEAR << std::endl;
    {
        try {
            Bureaucrat bob("Bob", 25);
            std::cout << bob << std::endl;
            PresidentialPardonForm pardonForm("Arthur");
            std::cout << pardonForm << std::endl;

            bob.signForm(pardonForm);
            std::cout << pardonForm << std::endl;
            bob.executeForm(pardonForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
        try {
            Bureaucrat bob("Bob", 25);
            std::cout << bob << std::endl;
            Bureaucrat prosser("Prosser", 5);
            std::cout << prosser << std::endl;


            PresidentialPardonForm pardonForm("Arthur");
            std::cout << pardonForm << std::endl;

            bob.signForm(pardonForm);
            std::cout << pardonForm << std::endl;
            prosser.executeForm(pardonForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
}
