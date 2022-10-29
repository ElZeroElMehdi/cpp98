#include "Harl.hpp"

int main ()
{
    Harl h = Harl();
    h.complain("info");
    std::cout << "********************" << std::endl;
    h.complain("debug");
    std::cout << "********************" << std::endl;
    h.complain("error");
    std::cout << "********************" << std::endl;
    h.complain("warning");
    std::cout << "********************" << std::endl;
}