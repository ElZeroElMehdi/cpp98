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
#include <ctime>
int main(int ac, char **argv)
{
    try
    {
        if (ac < 2 && ~isAllDigits(argv))
            throw std::runtime_error("invalid syntax");
        // std::vector<int> v;

        {
            //set timer
            clock_t start, end;
            
            start = clock();
            std::deque<int> d;
            fillContainer(d, argv);
            for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
                std::cout << *it << " ";
            std::cout << std::endl;
            mergeInsertionSort(d);
            for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it)
                std::cout << *it << " ";
            end = clock();
            std::cout << " time: " << ((double)(end - start) / CLOCKS_PER_SEC) * 1000000 << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}