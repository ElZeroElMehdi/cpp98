#include "cast.hpp"

Caster::Caster()
{
    this->arg = "";
    std::cout << "Caster Default Constructor" << std::endl;
}

Caster::Caster(const Caster &cst)
{
    this->arg = cst.arg;
    std::cout << "Caster Copy Constructor" << std::endl;
}

Caster& Caster::operator=(const Caster &rhs)
{
    this->arg = rhs.arg;
    return(*this);
}

Caster::~Caster()
{
    std::cout<< "Destrucer Caster called" << std::endl;
}

void Caster::setArg(std::string _arg)
{
    this->arg = _arg;
}

char Caster::to_char()
{
}

int Caster::to_int()
{
    return std::stoi(this->arg);
}

float Caster::to_float()
{

}

double Caster::to_double()
{

}
