#include "Brain.hpp"

// Constructors
Brain::Brain() {
    std::cout << COLOR_PURPLE  "Brain Constructor " << COLOR_CLEAR
              << " called." << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas_[i] = "Simple Idea";
    }
}

Brain::Brain(const Brain &copy) {
    std::cout << COLOR_PURPLE "Brain Copy Constructor " << COLOR_CLEAR
              << " called." << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas_[i] = copy.ideas_[i];
    }
}

// Destructor
Brain::~Brain() {
    std::cout << COLOR_PURPLE << "Brain Destructor " << COLOR_CLEAR
              << " called." << std::endl;
}

// Operators
Brain &Brain::operator=(const Brain &assign) {
    std::cout << COLOR_PURPLE << "Brain Assigment operator " << COLOR_CLEAR
              << " called." << std::endl;
    if (this != &assign) {
        for (int i = 0; i < 100; i++) {
            ideas_[i] = assign.ideas_[i];
        }
    }
    return *this;
}

// Getters / Setters
const std::string &Brain::getIdea(int i) const {
    if (i < 0 || i >= 100) {
        std::cout << "There is no such idea in the brain!";
        return ideas_[0];
    }
    return ideas_[i];
}

void Brain::setIdea(int i, const std::string &idea) {
    if (i < 0 || i >= 100) {
        return;
    }
    ideas_[i] = idea;
}


