/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:31:49 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/25 20:30:48 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

// std::string spliter(std::string str, std::string s1, std::string s2)
// {
// 	std::string s;
// 	std::istringstream ss(str);
// 	std::string subs;
// 	while(ss)
// 	{
// 		subs.clear();
// 		ss >> subs;
// 		if (subs.find(s1))
// 			subs = s2;
// 		s.append(subs);
// 		s.append(" ");
// 	}
// 	s[s.size() - 1]
// 	s[s.size() - 1] = '\n';
// 	return s;
// }

std::string spliter(std::string str, std::string s1, std::string s2)
{
	size_t pos;
	pos = str.find(s1);
	while (pos != std::string::npos) 
	{
		str.erase(pos, s1.size());
		str.insert(pos, s2);
		pos = str.find(s1);
		std::cout << str << std::endl;
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
		fileName.append(".replace");
		newfile.open(fileName.c_str());
		if (!myfile.is_open() || !newfile.is_open())
		{
			std::cout << "no such file\n";
			return 1;
		}
		while (std::getline(myfile, str))
		{
			newfile << spliter(str, av[2], av[3]);
			// newfile << "\n";
		}
		newfile.close();
		myfile.close();
	}
	else
		std::cout << "bad inputs\n";
	system("leaks replace");
	return 0;
}