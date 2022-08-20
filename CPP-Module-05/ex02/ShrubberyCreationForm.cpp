#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() :
        Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
        Form("ShrubberyCreationForm", 145, 137),
        _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
        Form(copy), _target(copy._target){}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Operators
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
    if (this != &assign) {
        Form::operator=(assign);
        const_cast<std::string &>(_target) = assign._target;
    }
    return *this;
}

//Member functions
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

    checkRequirements(executor);
    std::ofstream outputFile;
    std::string fileOutName = _target + "_shrubbery";
    outputFile.open(fileOutName.c_str());
    if (outputFile.fail()) {
        throw ShrubberyCreationForm::FileNotOpenException();
    }
    std::string shrubs =  "              ,@@@@@@@,\n"
                         "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
                         "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
                         "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
                         "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
                         "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
                         "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
                         "       |o|        | |         | |\n"
                         "       |.|        | |         | |\n"
                         "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n"
                         "source: https://ascii.co.uk/art/tree";
    if (!outputFile.good()) {
        throw ShrubberyCreationForm::FileNotWriteException();
    }
//    std::cout << "\033[1;32mThe successful writing ASCII trees is located in the \033[1;96m"
//              << fileOutName << "\033[0m" << std::endl;
    outputFile << shrubs;
    outputFile.close();
}

// Getters / Setters

const std::string &ShrubberyCreationForm::getTarget() const {
    return _target;
}


const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
    return ("Exception: File Not Open");
}

const char *ShrubberyCreationForm::FileNotWriteException::what() const throw() {
    return ("Exception: Writing to the file ended in failure");
}
