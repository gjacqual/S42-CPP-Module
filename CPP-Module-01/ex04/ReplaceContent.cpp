#include "ReplaceContent.hpp"

ReplaceContent::ReplaceContent(const std::string &filename,
                               const std::string &s1,
                               const std::string &s2) : filename_(
                                                    filename), s1_(s1), s2_(s2) {
    std::cout << "ReplaceContent Created." << std::endl;
}

ReplaceContent::~ReplaceContent() {
    std::cout << "ReplaceContent Destroyed." << std::endl;
}

void ReplaceContent::replace() {
    std::ifstream inputFile;
    inputFile.open(filename_.c_str());
    if (inputFile.fail()) {
        std::cout << "\033[1;31mError: could not open the input file\033[0m" << std::endl;
        return;
    }
    std::ofstream outputFile;
    outputFile.open(filename_.append(".replace").c_str());
    if (inputFile.fail()) {
        std::cout << "\033[1;31mError: could not open the input file\033[0m" << std::endl;
        return;
    }
    std::string line;

    while (std::getline(inputFile, line)) {
        std::string::size_type position;
        while ((position = line.find(s1_)) != std::string::npos) {
            line.erase(position, s1_.length());
            line.insert(position, s2_);
        }
        outputFile << line;
        if (!inputFile.eof()) {
            outputFile << std::endl;
        }
    }

    std::cout << "\033[1;32mThe successful replacement is located in the \033[1;96m"
    << filename_ << "\033[0m" << std::endl;
    inputFile.close();
    outputFile.close();
}
