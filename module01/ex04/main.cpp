/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:31:49 by eelmoham          #+#    #+#             */
/*   Updated: 2022/11/02 19:00:29 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

std::string spliter(std::string str, std::string s1, std::string s2)
{
	size_t pos;

	if (s1 == s2)
		return str;
	pos = str.find(s1);
	while (pos != std::string::npos) 
	{
		str.erase(pos, s1.size());
		str.insert(pos, s2);
		pos = str.find(s1);
	}
	return str;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream myfile;
		std::ofstream newfile;
		std::string str;
		std::string fileName;

		fileName.append(av[1]);
		myfile.open(fileName.c_str());
		if (myfile.is_open())
		{
			fileName.append(".replace");
			newfile.open(fileName.c_str());
			if (!newfile.is_open())
			{
				std::cout << "no such file, or something wrrong about "<< fileName << std::endl;
				return 1;
			}
		}
		else
		{
			std::cout << "no such file :"<< fileName<< std::endl;
			return 1;
		}
		while (std::getline(myfile, str))
		{
			newfile << spliter(str, av[2], av[3]);
			newfile << std::endl;
		}
		newfile.close();
		myfile.close();
		return 0;
	}
	else
		std::cout << "bad inputs\n";
	return 0;
}