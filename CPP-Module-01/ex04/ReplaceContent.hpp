#ifndef EX04_REPLACECONTENT_HPP
#define EX04_REPLACECONTENT_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class ReplaceContent {
public:
    ReplaceContent(const std::string &filename, const std::string &s1, const std::string &s2);
    void replace();
    ~ReplaceContent();

private:
    std::string filename_;
    std::string s1_;
    std::string s2_;
};


#endif //EX04_REPLACECONTENT_HPP
