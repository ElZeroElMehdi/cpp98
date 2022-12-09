#include "exception.hpp"

exception::exception(std::string _messgae)
{
    this->message = _messgae;
}

std::string exception::what()
{
    return this->message;
}

exception::~exception()
{
    std::cout << "" << std::endl;
}