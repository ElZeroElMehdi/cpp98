#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
//default private
class Brain 
{

    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &New);
        Brain operator=(const Brain &rhs);
        ~Brain();
};

#endif