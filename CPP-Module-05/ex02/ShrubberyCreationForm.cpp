#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() :
        Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
        Form("ShrubberyCreationForm", 145, 137),
        _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
        Form(copy) {
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Operators
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign) {
    Form::operator=(assign);
//    _target = assign._target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

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
                         "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_"
                         "source: https://ascii.co.uk/art/tree";
    if (!outputFile.good()) {
        throw ShrubberyCreationForm::FileNotWriteException();
    }
    std::cout << "\033[1;32mThe successful writing ASCII trees is located in the \033[1;96m"
              << fileOutName << "\033[0m" << std::endl;
    outputFile << shrubs;
    outputFile.close();
}



// Getters / Setters

//Member functions
const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
    return ("Exception: File Not Open");
}

const char *ShrubberyCreationForm::FileNotWriteException::what() const throw() {
    return ("Exception: Writing to the file ended in failure");
}

const char *ShrubberyCreationForm::GradeTooLowException::what() const throw() {
    return ("Exception: Grade of Bureaucrat is Too Low execute this.");
}
