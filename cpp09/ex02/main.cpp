/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 07:00:54 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/28 00:58:00 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
int main(int ac, char **argv)
{
    try
    {
        if (ac < 3 || !isAllDigits(argv))
            throw std::runtime_error("invalid syntax");
        if (isSorted(ac, argv))
            throw std::runtime_error("already sorted");
        
        std::vector<int> v;
        std::deque<int> d;
        
        fillContainer(d, argv);
        fillContainer(v, argv);

        std::cout << "before: ";
        for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        double dequeTime = sortContainer(d);
        double vectorTime = sortContainer(v);

        std::cout << "after: ";
        for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << dequeTime << " us" << std::endl;
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << vectorTime << " us" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
