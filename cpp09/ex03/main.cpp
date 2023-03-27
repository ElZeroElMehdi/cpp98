/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:54 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/27 00:31:10 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
int main (int ac, char **argv)
{
    try
    {
        if (ac != 2 || !allDigits(argv[1]))
            throw std::runtime_error("invalid syntax");
        std::string arg = argv[1];
        std::vector<int> v;
        std::deque<int> d;
        // fillVector(v, arg);
        filldeque(d, arg);
        for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
        mergeInsertionSort(d);
        for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
            std::cout << *it << " ";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}