/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 00:14:05 by eelmoham          #+#    #+#             */
/*   Updated: 2023/03/26 05:06:20 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"
#include <vector>

bool countDigitOperators(std::string srgs)
{
    int numDigit = 0;
    int numOperators = 0;

    for (size_t i = 0; i < srgs.size(); i++)
    {
        if (std::isdigit(srgs[i]))
            numDigit++;
        else if (srgs[i] == '+' || srgs[i] == '-' || srgs[i] == '*' || srgs[i] == '/')
            numOperators++;
    }
    if (numDigit == numOperators + 1)
        return true;
    else
        return false;
}

void splitSpace(std::string srgs,std::stack<float> &tk )
{
    for(size_t i = 0; i < srgs.size(); i++)
    {
        std::string tmp;
        while (srgs[i] != ' ' && i < srgs.size())
            tmp += srgs[i++];
        if (tmp.length() == 1 && std::isdigit(tmp.c_str()[0]))
            tk.push(std::stof(tmp));
        else if(tmp.length() == 1 && (tmp[0] == '+' || tmp[0] == '-' || tmp[0] == '*' || tmp[0] == '/'))
        {
            float b = tk.top();
            tk.pop();
            if (tmp[0] == '+')
                tk.top() = tk.top() + b;
            if (tmp[0] == '-')
                tk.top() = tk.top() - b;
            if (tmp[0] == '*')
                tk.top() = tk.top() * b;
            if (tmp[0] == '/')
                tk.top() = tk.top() / b;
        }
        else
            throw std::runtime_error("invladi sysnatx11");
    }
}