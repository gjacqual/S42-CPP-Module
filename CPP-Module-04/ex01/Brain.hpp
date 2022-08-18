#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include <iostream>

#define COLOR_CLEAR     "\033[0m"
#define COLOR_RED       "\033[1;31m"
#define COLOR_GREEN     "\033[0;32m"
#define COLOR_YELLOW    "\033[0;33m"
#define COLOR_PURPLE    "\033[0;35m"

class Brain {
public:
    // Constructors
    Brain();

    Brain(const Brain &copy);

    // Destructor
    ~Brain();

    // Operators
    Brain &operator=(const Brain &assign);

    //Getters / Setters
    const std::string &getIdea(int i) const;
    void setIdea(int i, std::string const &idea);

private:
    std::string ideas_[100];
};


#endif //EX01_BRAIN_HPP
