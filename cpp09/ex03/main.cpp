/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:54 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 08:13:05 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **argv)
{
    try
    {
        if (ac != 2 || !allDigits(argv[1]))
            throw std::runtime_error("invalid syntax");
        std::string arg = argv[1];
        std::vector<int> v;
        std::deque<int> d;
        fillVector(v, arg);
        filldeque(d, arg);
        
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}