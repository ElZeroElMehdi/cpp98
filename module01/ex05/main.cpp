#include "Harl.hpp"

int main (int ac, char **argv)
{
	(void)argv;
	if (ac > 1)
	{
		std::cout << "oops\n";
		return 1;
	}
    Harl h = Harl();
    h.complain("info");
    h.complain("debug");
    h.complain("error");
    h.complain("warning");
	return 0;
}