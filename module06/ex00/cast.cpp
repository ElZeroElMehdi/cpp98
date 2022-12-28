#include "cast.hpp"

Caster::Caster()
{
    this->arg = "";
}

Caster::Caster(std::string str)
{
    this->arg = str;
}

Caster::Caster(const Caster &cst)
{
    this->arg = cst.arg;
}

Caster &Caster::operator=(const Caster &rhs)
{
    this->arg = rhs.arg;
    return (*this);
}

Caster::~Caster()
{
}

void Caster::setArg(std::string _arg)
{
    this->arg = _arg;
    this->c = 0;
}

void Caster::setArg(char _arg)
{
    this->c = _arg;
    this->arg = "0";
}

char Caster::to_char()
{
    if (this->c)
        return this->c;
    int num = std::atoi(this->arg.c_str());
    char c = static_cast<char>(num);
    if (std::isprint(c))
        return c;
    else
        std::cout << " Non displayable";
    return 0;
}

int Caster::to_int()
{
    if (this->c)
        return static_cast<int>(c);
    else
        return std::atoi(this->arg.c_str());
}

float Caster::to_float()
{
        
    if (this->c)
        return this->to_int();
    char *end = NULL;
    std::string str  = this->arg;
    float value = std::strtod(str.c_str(), &end);
    return value + 0.0f;
}

double Caster::to_double()
{
    if (this->c)
        return this->to_int();
    char *end = NULL;
    std::string str  = this->arg;
    double value = std::strtod(str.c_str(), &end);
    return value;
}

std::string Caster::getArg(){
    return this->arg;
}

std::ostream &operator<<(std::ostream &COUT, Caster &obj)
{
    COUT << "char " << obj.to_char() << std::endl;
    COUT << "int " << obj.to_int() << std::endl;
    if (obj.to_float() == obj.to_int())
        COUT << "float " << obj.to_float()<<".0f"<<  std::endl;
    else
        COUT << "float " << obj.to_float()<<"f"<<  std::endl;
    if (obj.to_double() == obj.to_int())
        COUT << "double " << obj.to_double()<<".0"<<   std::endl;
    else
        COUT << "double " << obj.to_double()<<   std::endl;
    return COUT;
}
