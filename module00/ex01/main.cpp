/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:02:40 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/21 22:03:10 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook pb;
	std::string input;
	std::cout << "****************************************" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*   commands :ADD | SEARCH | EXIT.    *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "*                                     *" << std::endl;
	std::cout << "****************************************" << std::endl;
	while (1)
	{
		std::cout << "Enter command: ";
		if (!std::getline(std::cin, input))
		{
			std::cout << "bad input\n";
			break;
		}
		if (input == "ADD" || input == "add")
		{
			if (pb.addContact() == -1)
			{
				std::cout << "Oops Bad Hacker\n";
				break;
			}
		}
		else if (input == "SEARCH" || input == "search")
		{
			if (pb.searchContact() == -1)
			{
				std::cout << "Oops Bad Hacker\n";
				break;
			}
		}
		else if (input == "EXIT" || input == "exit")
			break;
		else
			std::cout << "error : \"" << input << "\" commad not fund\n";
	}
	return 0;
}