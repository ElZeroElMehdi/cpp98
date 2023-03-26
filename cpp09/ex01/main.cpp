/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 06:39:12 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 05:05:21 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int ac, char **ar)
{
    try
    {
        if (ac != 2 || !countDigitOperators(ar[1]))
            throw std::runtime_error("invalid number of arguments");
        else
        {
            std::stack<float> tokens;
            splitSpace(ar[1], tokens);
            std::cout << tokens.top()<< std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
