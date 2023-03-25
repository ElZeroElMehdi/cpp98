/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 06:39:12 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/25 06:41:19 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
int main(int ac, char **expression) 
{
    if (ac != 2) {std::cout << "Usage: ./ex01 \"expression\"" << std::endl; return 1;}
    std::string str(expression[1]);
    int result = evaluateRPN(std::string(str));
    std::cout << "Result: " << result << std::endl;

    return 0;
}
