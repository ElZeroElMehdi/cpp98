/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:31:49 by eelmoham          #+#    #+#             */
/*   Updated: 2022/10/24 23:09:12 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string spliter(std::string str, std::string s1, std::string s2)
{
	std::string s;
	std::istringstream ss(str);
	std::string subs;
	while(ss)
	{
		subs.clear();
		ss >> subs;
		if (subs == s1)
			subs = s2;
		s.append(subs);
		if (ss)
			s.append(" ");
	}
	// s.append("\n");
	return s;
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
		myfile.open(fileName);
		fileName.append(".replace");
		newfile.open(fileName);
		while (std::getline(myfile, str))
			newfile << spliter(str, av[2], av[3]);
		newfile.close();
		myfile.close();
	}
	// myfile << "hello\nhello\nff\ndd";
	// if (std::getline(MyFiles, str))
	// 	std::cout <<  str;
	// MyFiles.close();
	return 0;
}