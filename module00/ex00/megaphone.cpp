#include <iostream>

int main(int argc, char **argv)
{
	int i , j = 1;
	if (argc >= 2)
	{
		while(argv[j])
		{
			i = 0;
			while (argv[j][i])
				std::cout << (char)toupper(argv[j][i++]);
			j++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}