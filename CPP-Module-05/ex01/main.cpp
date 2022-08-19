#include <iostream>
#include "Bureaucrat.hpp"

int main() {

    // **************************** Test 1 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test1: Form signing ->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Boris", 40);
        std::cout << bureaucrat << std::endl;
        Form firstForm("Doc №21", 40, 39);
        try {
            std::cout << COLOR_GREEN << "Before status: " << COLOR_CLEAR << firstForm << std::endl;

            std::cout << COLOR_YELLOW << "<try to sign form> " << COLOR_CLEAR << std::endl;
            firstForm.beSigned(bureaucrat);
            std::cout << COLOR_GREEN << "After status: " << COLOR_CLEAR << firstForm << std::endl;
            std::cout << COLOR_YELLOW << "<Requesting a result from officer " << bureaucrat.getName() << COLOR_CLEAR
                      << std::endl;
            bureaucrat.signForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    // **************************** Test 2 ***********************************//
    std::cout << COLOR_GREEN
              << "<<<- Test 2: Checking Form Low/Height grade exceptions ->>>"
              << COLOR_CLEAR << std::endl;
    std::cout << "Form test(\"Doc №21\", 0, 1): ";
    {
        try {
            Form test("Doc №21", 0, 1);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    std::cout << "Form test(\"Doc №21\", 1, 0): ";
    {
        try {
            Form test("Doc №21", 1, 0);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    std::cout << "Form test(\"Doc №21\", 151, 150): ";
    {
        try {
            Form test("Doc №21", 151, 150);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    std::cout << "Form test(\"Doc №21\", 150, 151): ";
    {
        try {
            Form test("Doc №21", 151, 150);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    // **************************** Test 3 ***********************************//
    std::cout << COLOR_GREEN << "<<<- Test 3: Try to Create Bureaucrat with 151/0 grade ->>>"
              << COLOR_CLEAR << std::endl;
    std::cout << "bureaucrat(\"Boris\", 151): ";
    {
        try {
            Bureaucrat bureaucrat("Boris", 151);
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    std::cout << "bureaucrat(\"Boris\", 0): ";
    {
        try {
            Bureaucrat bureaucrat("Boris", 0);
            std::cout << bureaucrat << std::endl;
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
    }
    // **************************** Test 4 ***********************************//
    std::cout << COLOR_GREEN << "<<<-Test4: Unsuccessful Form signing ->>>"
              << COLOR_CLEAR << std::endl;
    {
        Bureaucrat bureaucrat("Boris", 40);
        std::cout << bureaucrat << std::endl;
        Form firstForm("Doc №21", 39, 150);
        try {
            std::cout << COLOR_GREEN << "Before status: " << COLOR_CLEAR << firstForm << std::endl;

            std::cout << COLOR_YELLOW << "<try to sign form> " << COLOR_CLEAR << std::endl;
            std::cout << "bureaucrat(\"Boris\", 40) -VS- firstForm(\"Doc №21\", 39, 150) : ";
            firstForm.beSigned(bureaucrat);
            std::cout << COLOR_GREEN << "After status: " << COLOR_CLEAR << firstForm << std::endl;
            // These next lines will not be executed due to an exception being triggered
            std::cout << COLOR_YELLOW << "<Requesting a result from officer "
                      << bureaucrat.getName() << COLOR_CLEAR << std::endl;
            bureaucrat.signForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
        std::cout << COLOR_YELLOW << "<Requesting a result from officer "
                  << bureaucrat.getName() << COLOR_CLEAR << std::endl;
        bureaucrat.signForm(firstForm);
        std::cout << COLOR_YELLOW << "<But Then Boris was promoted> " << COLOR_CLEAR << std::endl;
        try {
            bureaucrat.incrementGrade();
            std::cout << bureaucrat << std::endl;
            std::cout << COLOR_YELLOW << "<try to sign form> " << COLOR_CLEAR << std::endl;
            firstForm.beSigned(bureaucrat);
            bureaucrat.signForm(firstForm);
        } catch (std::exception &e) {
            std::cerr << COLOR_RED << e.what() << COLOR_CLEAR << std::endl;
        }
        std::cout << COLOR_GREEN << "<HAPPY END> " << COLOR_CLEAR << std::endl;
    }
}