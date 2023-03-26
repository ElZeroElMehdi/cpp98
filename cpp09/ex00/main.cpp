/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:56:36 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 02:56:37 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **file)
{

    if (ac == 2)
    {
        std::map<std::string, std::string> data;
        std::ifstream input("data.csv");
        std::ifstream inputF(file[1]);
        if (!input.is_open() || !inputF.is_open()){ std::cerr << "Error opening file" << std::endl; return 1;}
        else
            fill(input, data);
        showResult(inputF, data);
        input.close();
        inputF.close();
    }
    else{std::cerr << "Error: Invalid number of arguments" << std::endl; return 1;}
}