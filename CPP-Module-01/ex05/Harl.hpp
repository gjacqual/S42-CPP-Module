#ifndef EX05_HARL_HPP
#define EX05_HARL_HPP

#include <iostream>

class Harl {
public:
    Harl();
    ~Harl();
//    void (Harl::*call_ptr[4])(void);
    void complain( std::string level );
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

};

#endif //EX05_HARL_HPP
