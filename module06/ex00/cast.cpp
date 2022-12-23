#include "cast.hpp"

Caster::Caster()
{
    this->arg = "";
    std::cout << "Caster Default Constructor" << std::endl;
}

Caster::Caster(std::string str)
{
    this->arg = str;
    std::cout << "Caster parametrize Constructor" << std::endl;
}

Caster::Caster(const Caster &cst)
{
    this->arg = cst.arg;
    std::cout << "Caster Copy Constructor" << std::endl;
}

Caster &Caster::operator=(const Caster &rhs)
{
    this->arg = rhs.arg;
    return (*this);
}

Caster::~Caster()
{
    std::cout << "Destrucer Caster called" << std::endl;
}

void Caster::setArg(std::string _arg)
{
    this->arg = _arg;
}

char Caster::to_char()
{
    int num = std::atoi(this->arg.c_str());
    char c = static_cast<char>(num);
    if (std::isprint(c))
        return c;
    else
    {
        // std::string s ="this charcter not printable";
        // throw(std::exception((const char *)s.c_str()));
        std::cout << " Non displayable";
        return 0;
    }
    return 0;
}

int Caster::to_int()
{
    return std::atoi(this->arg.c_str());
}

float Caster::to_float()
{
    char *end = NULL;
    std::string str  = this->arg;
    if (str[str.length() -1] == 'f')
    {
        str = str.substr(0, str.length() -1);
        // std::cout << str << std::endl;
    }
    double value = std::strtod(str.c_str(), &end);
    if (end != str.c_str() + str.size())
    {
        // the string was not fully consumed, so the conversion failed
        // handle the error here
        std::cout << "its look not a float number "<< std::endl;
        return 0;
    }
    return static_cast<float>(value);
}

// double Caster::to_double()
// {

// }

std::ostream &operator<<(std::ostream &COUT, Caster &obj)
{
    COUT << "char " << obj.to_char() << std::endl;
    COUT << "int " << obj.to_int() << std::endl;
    COUT << "float " << obj.to_float() << std::endl;
    return COUT;
}