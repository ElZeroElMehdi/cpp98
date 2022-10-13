#include <iostream>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			std::cout << (char)toupper(argv[1][i++]);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}